// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREPORTDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREPORTDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DeleteReportDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteReportDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(ReportTaskId, reportTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteReportDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(ReportTaskId, reportTaskId_);
    };
    DeleteReportDefinitionRequest() = default ;
    DeleteReportDefinitionRequest(const DeleteReportDefinitionRequest &) = default ;
    DeleteReportDefinitionRequest(DeleteReportDefinitionRequest &&) = default ;
    DeleteReportDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteReportDefinitionRequest() = default ;
    DeleteReportDefinitionRequest& operator=(const DeleteReportDefinitionRequest &) = default ;
    DeleteReportDefinitionRequest& operator=(DeleteReportDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nbid_ == nullptr
        && this->reportTaskId_ == nullptr; };
    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DeleteReportDefinitionRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // reportTaskId Field Functions 
    bool hasReportTaskId() const { return this->reportTaskId_ != nullptr;};
    void deleteReportTaskId() { this->reportTaskId_ = nullptr;};
    inline int64_t getReportTaskId() const { DARABONBA_PTR_GET_DEFAULT(reportTaskId_, 0L) };
    inline DeleteReportDefinitionRequest& setReportTaskId(int64_t reportTaskId) { DARABONBA_PTR_SET_VALUE(reportTaskId_, reportTaskId) };


  protected:
    shared_ptr<string> nbid_ {};
    // This parameter is required.
    shared_ptr<int64_t> reportTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
