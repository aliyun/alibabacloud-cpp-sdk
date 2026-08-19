// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFETCHACCOUNTLABELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHFETCHACCOUNTLABELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountLabel20200315
{
namespace Models
{
  class BatchFetchAccountLabelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchFetchAccountLabelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Instant, instant_);
      DARABONBA_PTR_TO_JSON(LabelSeriesList, labelSeriesListShrink_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchFetchAccountLabelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Instant, instant_);
      DARABONBA_PTR_FROM_JSON(LabelSeriesList, labelSeriesListShrink_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    BatchFetchAccountLabelShrinkRequest() = default ;
    BatchFetchAccountLabelShrinkRequest(const BatchFetchAccountLabelShrinkRequest &) = default ;
    BatchFetchAccountLabelShrinkRequest(BatchFetchAccountLabelShrinkRequest &&) = default ;
    BatchFetchAccountLabelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchFetchAccountLabelShrinkRequest() = default ;
    BatchFetchAccountLabelShrinkRequest& operator=(const BatchFetchAccountLabelShrinkRequest &) = default ;
    BatchFetchAccountLabelShrinkRequest& operator=(BatchFetchAccountLabelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instant_ == nullptr
        && this->labelSeriesListShrink_ == nullptr && this->organization_ == nullptr && this->pk_ == nullptr && this->token_ == nullptr && this->userName_ == nullptr; };
    // instant Field Functions 
    bool hasInstant() const { return this->instant_ != nullptr;};
    void deleteInstant() { this->instant_ = nullptr;};
    inline bool getInstant() const { DARABONBA_PTR_GET_DEFAULT(instant_, false) };
    inline BatchFetchAccountLabelShrinkRequest& setInstant(bool instant) { DARABONBA_PTR_SET_VALUE(instant_, instant) };


    // labelSeriesListShrink Field Functions 
    bool hasLabelSeriesListShrink() const { return this->labelSeriesListShrink_ != nullptr;};
    void deleteLabelSeriesListShrink() { this->labelSeriesListShrink_ = nullptr;};
    inline string getLabelSeriesListShrink() const { DARABONBA_PTR_GET_DEFAULT(labelSeriesListShrink_, "") };
    inline BatchFetchAccountLabelShrinkRequest& setLabelSeriesListShrink(string labelSeriesListShrink) { DARABONBA_PTR_SET_VALUE(labelSeriesListShrink_, labelSeriesListShrink) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline BatchFetchAccountLabelShrinkRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline int64_t getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, 0L) };
    inline BatchFetchAccountLabelShrinkRequest& setPk(int64_t pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline BatchFetchAccountLabelShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline BatchFetchAccountLabelShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<bool> instant_ {};
    // This parameter is required.
    shared_ptr<string> labelSeriesListShrink_ {};
    // This parameter is required.
    shared_ptr<string> organization_ {};
    // This parameter is required.
    shared_ptr<int64_t> pk_ {};
    // This parameter is required.
    shared_ptr<string> token_ {};
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountLabel20200315
#endif
