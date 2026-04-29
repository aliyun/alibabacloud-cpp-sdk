// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUNKNOWNTHREATDETECTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUNKNOWNTHREATDETECTPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteUnknownThreatDetectProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUnknownThreatDetectProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProcessIdList, processIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUnknownThreatDetectProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProcessIdList, processIdList_);
    };
    DeleteUnknownThreatDetectProcessRequest() = default ;
    DeleteUnknownThreatDetectProcessRequest(const DeleteUnknownThreatDetectProcessRequest &) = default ;
    DeleteUnknownThreatDetectProcessRequest(DeleteUnknownThreatDetectProcessRequest &&) = default ;
    DeleteUnknownThreatDetectProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUnknownThreatDetectProcessRequest() = default ;
    DeleteUnknownThreatDetectProcessRequest& operator=(const DeleteUnknownThreatDetectProcessRequest &) = default ;
    DeleteUnknownThreatDetectProcessRequest& operator=(DeleteUnknownThreatDetectProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->processIdList_ == nullptr; };
    // processIdList Field Functions 
    bool hasProcessIdList() const { return this->processIdList_ != nullptr;};
    void deleteProcessIdList() { this->processIdList_ = nullptr;};
    inline const vector<string> & getProcessIdList() const { DARABONBA_PTR_GET_CONST(processIdList_, vector<string>) };
    inline vector<string> getProcessIdList() { DARABONBA_PTR_GET(processIdList_, vector<string>) };
    inline DeleteUnknownThreatDetectProcessRequest& setProcessIdList(const vector<string> & processIdList) { DARABONBA_PTR_SET_VALUE(processIdList_, processIdList) };
    inline DeleteUnknownThreatDetectProcessRequest& setProcessIdList(vector<string> && processIdList) { DARABONBA_PTR_SET_RVALUE(processIdList_, processIdList) };


  protected:
    shared_ptr<vector<string>> processIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
