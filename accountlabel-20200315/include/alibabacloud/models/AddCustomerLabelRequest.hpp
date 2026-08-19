// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCUSTOMERLABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCUSTOMERLABELREQUEST_HPP_
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
  class AddCustomerLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCustomerLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Endtime, endtime_);
      DARABONBA_PTR_TO_JSON(LabelSeries, labelSeries_);
      DARABONBA_PTR_TO_JSON(LabelTypes, labelTypes_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, AddCustomerLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Endtime, endtime_);
      DARABONBA_PTR_FROM_JSON(LabelSeries, labelSeries_);
      DARABONBA_PTR_FROM_JSON(LabelTypes, labelTypes_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    AddCustomerLabelRequest() = default ;
    AddCustomerLabelRequest(const AddCustomerLabelRequest &) = default ;
    AddCustomerLabelRequest(AddCustomerLabelRequest &&) = default ;
    AddCustomerLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCustomerLabelRequest() = default ;
    AddCustomerLabelRequest& operator=(const AddCustomerLabelRequest &) = default ;
    AddCustomerLabelRequest& operator=(AddCustomerLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endtime_ == nullptr
        && this->labelSeries_ == nullptr && this->labelTypes_ == nullptr && this->organization_ == nullptr && this->PK_ == nullptr && this->startTime_ == nullptr
        && this->token_ == nullptr && this->userName_ == nullptr; };
    // endtime Field Functions 
    bool hasEndtime() const { return this->endtime_ != nullptr;};
    void deleteEndtime() { this->endtime_ = nullptr;};
    inline string getEndtime() const { DARABONBA_PTR_GET_DEFAULT(endtime_, "") };
    inline AddCustomerLabelRequest& setEndtime(string endtime) { DARABONBA_PTR_SET_VALUE(endtime_, endtime) };


    // labelSeries Field Functions 
    bool hasLabelSeries() const { return this->labelSeries_ != nullptr;};
    void deleteLabelSeries() { this->labelSeries_ = nullptr;};
    inline string getLabelSeries() const { DARABONBA_PTR_GET_DEFAULT(labelSeries_, "") };
    inline AddCustomerLabelRequest& setLabelSeries(string labelSeries) { DARABONBA_PTR_SET_VALUE(labelSeries_, labelSeries) };


    // labelTypes Field Functions 
    bool hasLabelTypes() const { return this->labelTypes_ != nullptr;};
    void deleteLabelTypes() { this->labelTypes_ = nullptr;};
    inline const vector<string> & getLabelTypes() const { DARABONBA_PTR_GET_CONST(labelTypes_, vector<string>) };
    inline vector<string> getLabelTypes() { DARABONBA_PTR_GET(labelTypes_, vector<string>) };
    inline AddCustomerLabelRequest& setLabelTypes(const vector<string> & labelTypes) { DARABONBA_PTR_SET_VALUE(labelTypes_, labelTypes) };
    inline AddCustomerLabelRequest& setLabelTypes(vector<string> && labelTypes) { DARABONBA_PTR_SET_RVALUE(labelTypes_, labelTypes) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline AddCustomerLabelRequest& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline int64_t getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, 0L) };
    inline AddCustomerLabelRequest& setPK(int64_t PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AddCustomerLabelRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline AddCustomerLabelRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline AddCustomerLabelRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> endtime_ {};
    // This parameter is required.
    shared_ptr<string> labelSeries_ {};
    // This parameter is required.
    shared_ptr<vector<string>> labelTypes_ {};
    // This parameter is required.
    shared_ptr<string> organization_ {};
    // This parameter is required.
    shared_ptr<int64_t> PK_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> token_ {};
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountLabel20200315
#endif
