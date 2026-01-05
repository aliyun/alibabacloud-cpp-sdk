// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPORTFOLIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPORTFOLIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetPortfolioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPortfolioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PortfolioDetail, portfolioDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagOptions, tagOptions_);
    };
    friend void from_json(const Darabonba::Json& j, GetPortfolioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PortfolioDetail, portfolioDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagOptions, tagOptions_);
    };
    GetPortfolioResponseBody() = default ;
    GetPortfolioResponseBody(const GetPortfolioResponseBody &) = default ;
    GetPortfolioResponseBody(GetPortfolioResponseBody &&) = default ;
    GetPortfolioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPortfolioResponseBody() = default ;
    GetPortfolioResponseBody& operator=(const GetPortfolioResponseBody &) = default ;
    GetPortfolioResponseBody& operator=(GetPortfolioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(TagOptionId, tagOptionId_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, TagOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(TagOptionId, tagOptionId_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      TagOptions() = default ;
      TagOptions(const TagOptions &) = default ;
      TagOptions(TagOptions &&) = default ;
      TagOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagOptions() = default ;
      TagOptions& operator=(const TagOptions &) = default ;
      TagOptions& operator=(TagOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->key_ == nullptr && this->owner_ == nullptr && this->tagOptionId_ == nullptr && this->value_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline TagOptions& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline TagOptions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline TagOptions& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // tagOptionId Field Functions 
      bool hasTagOptionId() const { return this->tagOptionId_ != nullptr;};
      void deleteTagOptionId() { this->tagOptionId_ = nullptr;};
      inline string getTagOptionId() const { DARABONBA_PTR_GET_DEFAULT(tagOptionId_, "") };
      inline TagOptions& setTagOptionId(string tagOptionId) { DARABONBA_PTR_SET_VALUE(tagOptionId_, tagOptionId) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline TagOptions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Indicates whether the tag option is enabled. Valid values:
      // 
      // - true (default)
      // - false
      shared_ptr<bool> active_ {};
      // The key of the tag option.
      shared_ptr<string> key_ {};
      // The ID of the owner of the tag option.
      shared_ptr<string> owner_ {};
      // The ID of the tag option.
      shared_ptr<string> tagOptionId_ {};
      // The value of the tag option.
      shared_ptr<string> value_ {};
    };

    class PortfolioDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortfolioDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PortfolioArn, portfolioArn_);
        DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_TO_JSON(PortfolioName, portfolioName_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      };
      friend void from_json(const Darabonba::Json& j, PortfolioDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PortfolioArn, portfolioArn_);
        DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_FROM_JSON(PortfolioName, portfolioName_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      };
      PortfolioDetail() = default ;
      PortfolioDetail(const PortfolioDetail &) = default ;
      PortfolioDetail(PortfolioDetail &&) = default ;
      PortfolioDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortfolioDetail() = default ;
      PortfolioDetail& operator=(const PortfolioDetail &) = default ;
      PortfolioDetail& operator=(PortfolioDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->portfolioArn_ == nullptr && this->portfolioId_ == nullptr && this->portfolioName_ == nullptr && this->providerName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PortfolioDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PortfolioDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // portfolioArn Field Functions 
      bool hasPortfolioArn() const { return this->portfolioArn_ != nullptr;};
      void deletePortfolioArn() { this->portfolioArn_ = nullptr;};
      inline string getPortfolioArn() const { DARABONBA_PTR_GET_DEFAULT(portfolioArn_, "") };
      inline PortfolioDetail& setPortfolioArn(string portfolioArn) { DARABONBA_PTR_SET_VALUE(portfolioArn_, portfolioArn) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline PortfolioDetail& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // portfolioName Field Functions 
      bool hasPortfolioName() const { return this->portfolioName_ != nullptr;};
      void deletePortfolioName() { this->portfolioName_ = nullptr;};
      inline string getPortfolioName() const { DARABONBA_PTR_GET_DEFAULT(portfolioName_, "") };
      inline PortfolioDetail& setPortfolioName(string portfolioName) { DARABONBA_PTR_SET_VALUE(portfolioName_, portfolioName) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline PortfolioDetail& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    protected:
      // The time when the product portfolio was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the product portfolio.
      shared_ptr<string> description_ {};
      // The Alibaba Cloud Resource Name (ARN) of the product portfolio.
      shared_ptr<string> portfolioArn_ {};
      // The ID of the product portfolio.
      shared_ptr<string> portfolioId_ {};
      // The name of the product portfolio.
      shared_ptr<string> portfolioName_ {};
      // The provider of the product portfolio.
      shared_ptr<string> providerName_ {};
    };

    virtual bool empty() const override { return this->portfolioDetail_ == nullptr
        && this->requestId_ == nullptr && this->tagOptions_ == nullptr; };
    // portfolioDetail Field Functions 
    bool hasPortfolioDetail() const { return this->portfolioDetail_ != nullptr;};
    void deletePortfolioDetail() { this->portfolioDetail_ = nullptr;};
    inline const GetPortfolioResponseBody::PortfolioDetail & getPortfolioDetail() const { DARABONBA_PTR_GET_CONST(portfolioDetail_, GetPortfolioResponseBody::PortfolioDetail) };
    inline GetPortfolioResponseBody::PortfolioDetail getPortfolioDetail() { DARABONBA_PTR_GET(portfolioDetail_, GetPortfolioResponseBody::PortfolioDetail) };
    inline GetPortfolioResponseBody& setPortfolioDetail(const GetPortfolioResponseBody::PortfolioDetail & portfolioDetail) { DARABONBA_PTR_SET_VALUE(portfolioDetail_, portfolioDetail) };
    inline GetPortfolioResponseBody& setPortfolioDetail(GetPortfolioResponseBody::PortfolioDetail && portfolioDetail) { DARABONBA_PTR_SET_RVALUE(portfolioDetail_, portfolioDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPortfolioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagOptions Field Functions 
    bool hasTagOptions() const { return this->tagOptions_ != nullptr;};
    void deleteTagOptions() { this->tagOptions_ = nullptr;};
    inline const vector<GetPortfolioResponseBody::TagOptions> & getTagOptions() const { DARABONBA_PTR_GET_CONST(tagOptions_, vector<GetPortfolioResponseBody::TagOptions>) };
    inline vector<GetPortfolioResponseBody::TagOptions> getTagOptions() { DARABONBA_PTR_GET(tagOptions_, vector<GetPortfolioResponseBody::TagOptions>) };
    inline GetPortfolioResponseBody& setTagOptions(const vector<GetPortfolioResponseBody::TagOptions> & tagOptions) { DARABONBA_PTR_SET_VALUE(tagOptions_, tagOptions) };
    inline GetPortfolioResponseBody& setTagOptions(vector<GetPortfolioResponseBody::TagOptions> && tagOptions) { DARABONBA_PTR_SET_RVALUE(tagOptions_, tagOptions) };


  protected:
    // The details of the product portfolio.
    shared_ptr<GetPortfolioResponseBody::PortfolioDetail> portfolioDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The tag options associated with the service portfolio.
    shared_ptr<vector<GetPortfolioResponseBody::TagOptions>> tagOptions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
