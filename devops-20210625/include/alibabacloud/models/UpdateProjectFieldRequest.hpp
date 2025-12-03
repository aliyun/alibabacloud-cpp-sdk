// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTFIELDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateProjectFieldRequestUpdateBasicFieldRequestList.hpp>
#include <alibabacloud/models/UpdateProjectFieldRequestUpdateForOpenApiList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class UpdateProjectFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_TO_JSON(updateBasicFieldRequestList, updateBasicFieldRequestList_);
      DARABONBA_PTR_TO_JSON(updateForOpenApiList, updateForOpenApiList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(statusIdentifier, statusIdentifier_);
      DARABONBA_PTR_FROM_JSON(updateBasicFieldRequestList, updateBasicFieldRequestList_);
      DARABONBA_PTR_FROM_JSON(updateForOpenApiList, updateForOpenApiList_);
    };
    UpdateProjectFieldRequest() = default ;
    UpdateProjectFieldRequest(const UpdateProjectFieldRequest &) = default ;
    UpdateProjectFieldRequest(UpdateProjectFieldRequest &&) = default ;
    UpdateProjectFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectFieldRequest() = default ;
    UpdateProjectFieldRequest& operator=(const UpdateProjectFieldRequest &) = default ;
    UpdateProjectFieldRequest& operator=(UpdateProjectFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statusIdentifier_ == nullptr
        && return this->updateBasicFieldRequestList_ == nullptr && return this->updateForOpenApiList_ == nullptr; };
    // statusIdentifier Field Functions 
    bool hasStatusIdentifier() const { return this->statusIdentifier_ != nullptr;};
    void deleteStatusIdentifier() { this->statusIdentifier_ = nullptr;};
    inline string statusIdentifier() const { DARABONBA_PTR_GET_DEFAULT(statusIdentifier_, "") };
    inline UpdateProjectFieldRequest& setStatusIdentifier(string statusIdentifier) { DARABONBA_PTR_SET_VALUE(statusIdentifier_, statusIdentifier) };


    // updateBasicFieldRequestList Field Functions 
    bool hasUpdateBasicFieldRequestList() const { return this->updateBasicFieldRequestList_ != nullptr;};
    void deleteUpdateBasicFieldRequestList() { this->updateBasicFieldRequestList_ = nullptr;};
    inline const vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList> & updateBasicFieldRequestList() const { DARABONBA_PTR_GET_CONST(updateBasicFieldRequestList_, vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList>) };
    inline vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList> updateBasicFieldRequestList() { DARABONBA_PTR_GET(updateBasicFieldRequestList_, vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList>) };
    inline UpdateProjectFieldRequest& setUpdateBasicFieldRequestList(const vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList> & updateBasicFieldRequestList) { DARABONBA_PTR_SET_VALUE(updateBasicFieldRequestList_, updateBasicFieldRequestList) };
    inline UpdateProjectFieldRequest& setUpdateBasicFieldRequestList(vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList> && updateBasicFieldRequestList) { DARABONBA_PTR_SET_RVALUE(updateBasicFieldRequestList_, updateBasicFieldRequestList) };


    // updateForOpenApiList Field Functions 
    bool hasUpdateForOpenApiList() const { return this->updateForOpenApiList_ != nullptr;};
    void deleteUpdateForOpenApiList() { this->updateForOpenApiList_ = nullptr;};
    inline const vector<UpdateProjectFieldRequestUpdateForOpenApiList> & updateForOpenApiList() const { DARABONBA_PTR_GET_CONST(updateForOpenApiList_, vector<UpdateProjectFieldRequestUpdateForOpenApiList>) };
    inline vector<UpdateProjectFieldRequestUpdateForOpenApiList> updateForOpenApiList() { DARABONBA_PTR_GET(updateForOpenApiList_, vector<UpdateProjectFieldRequestUpdateForOpenApiList>) };
    inline UpdateProjectFieldRequest& setUpdateForOpenApiList(const vector<UpdateProjectFieldRequestUpdateForOpenApiList> & updateForOpenApiList) { DARABONBA_PTR_SET_VALUE(updateForOpenApiList_, updateForOpenApiList) };
    inline UpdateProjectFieldRequest& setUpdateForOpenApiList(vector<UpdateProjectFieldRequestUpdateForOpenApiList> && updateForOpenApiList) { DARABONBA_PTR_SET_RVALUE(updateForOpenApiList_, updateForOpenApiList) };


  protected:
    std::shared_ptr<string> statusIdentifier_ = nullptr;
    std::shared_ptr<vector<UpdateProjectFieldRequestUpdateBasicFieldRequestList>> updateBasicFieldRequestList_ = nullptr;
    std::shared_ptr<vector<UpdateProjectFieldRequestUpdateForOpenApiList>> updateForOpenApiList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
