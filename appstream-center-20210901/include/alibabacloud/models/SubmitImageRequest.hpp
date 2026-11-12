// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class SubmitImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationRegionList, destinationRegionList_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationRegionList, destinationRegionList_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SubmitImageRequest() = default ;
    SubmitImageRequest(const SubmitImageRequest &) = default ;
    SubmitImageRequest(SubmitImageRequest &&) = default ;
    SubmitImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageRequest() = default ;
    SubmitImageRequest& operator=(const SubmitImageRequest &) = default ;
    SubmitImageRequest& operator=(SubmitImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destinationRegionList_ == nullptr
        && this->taskId_ == nullptr; };
    // destinationRegionList Field Functions 
    bool hasDestinationRegionList() const { return this->destinationRegionList_ != nullptr;};
    void deleteDestinationRegionList() { this->destinationRegionList_ = nullptr;};
    inline const vector<string> & getDestinationRegionList() const { DARABONBA_PTR_GET_CONST(destinationRegionList_, vector<string>) };
    inline vector<string> getDestinationRegionList() { DARABONBA_PTR_GET(destinationRegionList_, vector<string>) };
    inline SubmitImageRequest& setDestinationRegionList(const vector<string> & destinationRegionList) { DARABONBA_PTR_SET_VALUE(destinationRegionList_, destinationRegionList) };
    inline SubmitImageRequest& setDestinationRegionList(vector<string> && destinationRegionList) { DARABONBA_PTR_SET_RVALUE(destinationRegionList_, destinationRegionList) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubmitImageRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The list of destination regions to which the image is copied.
    shared_ptr<vector<string>> destinationRegionList_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
