// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREPORTDETAILRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYREPORTDETAILRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryReportDetailResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReportDetailResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReportDetailResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QueryReportDetailResponseBodyContent() = default ;
    QueryReportDetailResponseBodyContent(const QueryReportDetailResponseBodyContent &) = default ;
    QueryReportDetailResponseBodyContent(QueryReportDetailResponseBodyContent &&) = default ;
    QueryReportDetailResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReportDetailResponseBodyContent() = default ;
    QueryReportDetailResponseBodyContent& operator=(const QueryReportDetailResponseBodyContent &) = default ;
    QueryReportDetailResponseBodyContent& operator=(QueryReportDetailResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->images_ != nullptr
        && this->key_ != nullptr && this->sort_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline QueryReportDetailResponseBodyContent& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline QueryReportDetailResponseBodyContent& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline QueryReportDetailResponseBodyContent& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline QueryReportDetailResponseBodyContent& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QueryReportDetailResponseBodyContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline QueryReportDetailResponseBodyContent& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<vector<string>> images_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
