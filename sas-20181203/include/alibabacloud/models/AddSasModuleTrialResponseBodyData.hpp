// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSASMODULETRIALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDSASMODULETRIALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddSasModuleTrialResponseBodyDataTrialRecordList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddSasModuleTrialResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSasModuleTrialResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TrialRecordList, trialRecordList_);
    };
    friend void from_json(const Darabonba::Json& j, AddSasModuleTrialResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TrialRecordList, trialRecordList_);
    };
    AddSasModuleTrialResponseBodyData() = default ;
    AddSasModuleTrialResponseBodyData(const AddSasModuleTrialResponseBodyData &) = default ;
    AddSasModuleTrialResponseBodyData(AddSasModuleTrialResponseBodyData &&) = default ;
    AddSasModuleTrialResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSasModuleTrialResponseBodyData() = default ;
    AddSasModuleTrialResponseBodyData& operator=(const AddSasModuleTrialResponseBodyData &) = default ;
    AddSasModuleTrialResponseBodyData& operator=(AddSasModuleTrialResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trialRecordList_ != nullptr; };
    // trialRecordList Field Functions 
    bool hasTrialRecordList() const { return this->trialRecordList_ != nullptr;};
    void deleteTrialRecordList() { this->trialRecordList_ = nullptr;};
    inline const vector<Models::AddSasModuleTrialResponseBodyDataTrialRecordList> & trialRecordList() const { DARABONBA_PTR_GET_CONST(trialRecordList_, vector<Models::AddSasModuleTrialResponseBodyDataTrialRecordList>) };
    inline vector<Models::AddSasModuleTrialResponseBodyDataTrialRecordList> trialRecordList() { DARABONBA_PTR_GET(trialRecordList_, vector<Models::AddSasModuleTrialResponseBodyDataTrialRecordList>) };
    inline AddSasModuleTrialResponseBodyData& setTrialRecordList(const vector<Models::AddSasModuleTrialResponseBodyDataTrialRecordList> & trialRecordList) { DARABONBA_PTR_SET_VALUE(trialRecordList_, trialRecordList) };
    inline AddSasModuleTrialResponseBodyData& setTrialRecordList(vector<Models::AddSasModuleTrialResponseBodyDataTrialRecordList> && trialRecordList) { DARABONBA_PTR_SET_RVALUE(trialRecordList_, trialRecordList) };


  protected:
    // The information about the trial use.
    std::shared_ptr<vector<Models::AddSasModuleTrialResponseBodyDataTrialRecordList>> trialRecordList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
