// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLINKRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_QUERYLINKRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryLinkResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLinkResponseBodyResultContent& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLinkResponseBodyResultContent& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    QueryLinkResponseBodyResultContent() = default ;
    QueryLinkResponseBodyResultContent(const QueryLinkResponseBodyResultContent &) = default ;
    QueryLinkResponseBodyResultContent(QueryLinkResponseBodyResultContent &&) = default ;
    QueryLinkResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLinkResponseBodyResultContent() = default ;
    QueryLinkResponseBodyResultContent& operator=(const QueryLinkResponseBodyResultContent &) = default ;
    QueryLinkResponseBodyResultContent& operator=(QueryLinkResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->target_ == nullptr && return this->version_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline QueryLinkResponseBodyResultContent& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline QueryLinkResponseBodyResultContent& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline QueryLinkResponseBodyResultContent& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline QueryLinkResponseBodyResultContent& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    Darabonba::Json data_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
