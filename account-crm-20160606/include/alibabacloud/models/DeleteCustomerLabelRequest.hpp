// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMERLABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMERLABELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class DeleteCustomerLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomerLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelSeries, labelSeries_);
      DARABONBA_PTR_TO_JSON(LabelTypes, labelTypes_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomerLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelSeries, labelSeries_);
      DARABONBA_PTR_FROM_JSON(LabelTypes, labelTypes_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    DeleteCustomerLabelRequest() = default ;
    DeleteCustomerLabelRequest(const DeleteCustomerLabelRequest &) = default ;
    DeleteCustomerLabelRequest(DeleteCustomerLabelRequest &&) = default ;
    DeleteCustomerLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomerLabelRequest() = default ;
    DeleteCustomerLabelRequest& operator=(const DeleteCustomerLabelRequest &) = default ;
    DeleteCustomerLabelRequest& operator=(DeleteCustomerLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelSeries_ == nullptr
        && this->labelTypes_ == nullptr && this->organization_ == nullptr && this->PK_ == nullptr && this->token_ == nullptr && this->userName_ == nullptr; };
    // labelSeries Field Functions 
    bool hasLabelSeries() const { return this->labelSeries_ != nullptr;};
    void deleteLabelSeries() { this->labelSeries_ = nullptr;};
    inline string getLabelSeries() const { DARABONBA_PTR_GET_DEFAULT(labelSeries_, "") };
    inline DeleteCustomerLabelRequest& setLabelSeries(string labelSeries) { DARABONBA_PTR_SET_VALUE(labelSeries_, labelSeries) };


    // labelTypes Field Functions 
    bool hasLabelTypes() const { return this->labelTypes_ != nullptr;};
    void deleteLabelTypes() { this->labelTypes_ = nullptr;};
    inline const vector<string> & getLabelTypes() const { DARABONBA_PTR_GET_CONST(labelTypes_, vector<string>) };
    inline vector<string> getLabelTypes() { DARABONBA_PTR_GET(labelTypes_, vector<string>) };
    inline DeleteCustomerLabelRequest& setLabelTypes(const vector<string> & labelTypes) { DARABONBA_PTR_SET_VALUE(labelTypes_, labelTypes) };
    inline DeleteCustomerLabelRequest& setLabelTypes(vector<string> && labelTypes) { DARABONBA_PTR_SET_RVALUE(labelTypes_, labelTypes) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline DeleteCustomerLabelRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline int64_t getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, 0L) };
    inline DeleteCustomerLabelRequest& setPK(int64_t PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DeleteCustomerLabelRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DeleteCustomerLabelRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    shared_ptr<string> labelSeries_ {};
    // This parameter is required.
    shared_ptr<vector<string>> labelTypes_ {};
    // This parameter is required.
    shared_ptr<string> organization_ {};
    // This parameter is required.
    shared_ptr<int64_t> PK_ {};
    shared_ptr<string> token_ {};
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
