// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFETCHACCOUNTLABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHFETCHACCOUNTLABELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountLabel20200315
{
namespace Models
{
  class BatchFetchAccountLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchFetchAccountLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Instant, instant_);
      DARABONBA_PTR_TO_JSON(LabelSeriesList, labelSeriesList_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchFetchAccountLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Instant, instant_);
      DARABONBA_PTR_FROM_JSON(LabelSeriesList, labelSeriesList_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    BatchFetchAccountLabelRequest() = default ;
    BatchFetchAccountLabelRequest(const BatchFetchAccountLabelRequest &) = default ;
    BatchFetchAccountLabelRequest(BatchFetchAccountLabelRequest &&) = default ;
    BatchFetchAccountLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchFetchAccountLabelRequest() = default ;
    BatchFetchAccountLabelRequest& operator=(const BatchFetchAccountLabelRequest &) = default ;
    BatchFetchAccountLabelRequest& operator=(BatchFetchAccountLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instant_ == nullptr
        && this->labelSeriesList_ == nullptr && this->organization_ == nullptr && this->pk_ == nullptr && this->token_ == nullptr && this->userName_ == nullptr; };
    // instant Field Functions 
    bool hasInstant() const { return this->instant_ != nullptr;};
    void deleteInstant() { this->instant_ = nullptr;};
    inline bool getInstant() const { DARABONBA_PTR_GET_DEFAULT(instant_, false) };
    inline BatchFetchAccountLabelRequest& setInstant(bool instant) { DARABONBA_PTR_SET_VALUE(instant_, instant) };


    // labelSeriesList Field Functions 
    bool hasLabelSeriesList() const { return this->labelSeriesList_ != nullptr;};
    void deleteLabelSeriesList() { this->labelSeriesList_ = nullptr;};
    inline const vector<string> & getLabelSeriesList() const { DARABONBA_PTR_GET_CONST(labelSeriesList_, vector<string>) };
    inline vector<string> getLabelSeriesList() { DARABONBA_PTR_GET(labelSeriesList_, vector<string>) };
    inline BatchFetchAccountLabelRequest& setLabelSeriesList(const vector<string> & labelSeriesList) { DARABONBA_PTR_SET_VALUE(labelSeriesList_, labelSeriesList) };
    inline BatchFetchAccountLabelRequest& setLabelSeriesList(vector<string> && labelSeriesList) { DARABONBA_PTR_SET_RVALUE(labelSeriesList_, labelSeriesList) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline BatchFetchAccountLabelRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline int64_t getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, 0L) };
    inline BatchFetchAccountLabelRequest& setPk(int64_t pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline BatchFetchAccountLabelRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline BatchFetchAccountLabelRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<bool> instant_ {};
    // This parameter is required.
    shared_ptr<vector<string>> labelSeriesList_ {};
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
