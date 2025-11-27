// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ELEMENTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_ELEMENTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ElementContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ElementContent& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, ElementContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(TimeRange, timeRange_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    ElementContent() = default ;
    ElementContent(const ElementContent &) = default ;
    ElementContent(ElementContent &&) = default ;
    ElementContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ElementContent() = default ;
    ElementContent& operator=(const ElementContent &) = default ;
    ElementContent& operator=(ElementContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->timeRange_ == nullptr && return this->type_ == nullptr && return this->URL_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ElementContent& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // timeRange Field Functions 
    bool hasTimeRange() const { return this->timeRange_ != nullptr;};
    void deleteTimeRange() { this->timeRange_ = nullptr;};
    inline const vector<int64_t> & timeRange() const { DARABONBA_PTR_GET_CONST(timeRange_, vector<int64_t>) };
    inline vector<int64_t> timeRange() { DARABONBA_PTR_GET(timeRange_, vector<int64_t>) };
    inline ElementContent& setTimeRange(const vector<int64_t> & timeRange) { DARABONBA_PTR_SET_VALUE(timeRange_, timeRange) };
    inline ElementContent& setTimeRange(vector<int64_t> && timeRange) { DARABONBA_PTR_SET_RVALUE(timeRange_, timeRange) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ElementContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline ElementContent& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<int64_t>> timeRange_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
