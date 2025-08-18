// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteAppInstancesResponseBodyDeleteAppInstanceModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DeleteAppInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteAppInstanceModels, deleteAppInstanceModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteAppInstanceModels, deleteAppInstanceModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAppInstancesResponseBody() = default ;
    DeleteAppInstancesResponseBody(const DeleteAppInstancesResponseBody &) = default ;
    DeleteAppInstancesResponseBody(DeleteAppInstancesResponseBody &&) = default ;
    DeleteAppInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppInstancesResponseBody() = default ;
    DeleteAppInstancesResponseBody& operator=(const DeleteAppInstancesResponseBody &) = default ;
    DeleteAppInstancesResponseBody& operator=(DeleteAppInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deleteAppInstanceModels_ != nullptr
        && this->requestId_ != nullptr; };
    // deleteAppInstanceModels Field Functions 
    bool hasDeleteAppInstanceModels() const { return this->deleteAppInstanceModels_ != nullptr;};
    void deleteDeleteAppInstanceModels() { this->deleteAppInstanceModels_ = nullptr;};
    inline const vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels> & deleteAppInstanceModels() const { DARABONBA_PTR_GET_CONST(deleteAppInstanceModels_, vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels>) };
    inline vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels> deleteAppInstanceModels() { DARABONBA_PTR_GET(deleteAppInstanceModels_, vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels>) };
    inline DeleteAppInstancesResponseBody& setDeleteAppInstanceModels(const vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels> & deleteAppInstanceModels) { DARABONBA_PTR_SET_VALUE(deleteAppInstanceModels_, deleteAppInstanceModels) };
    inline DeleteAppInstancesResponseBody& setDeleteAppInstanceModels(vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels> && deleteAppInstanceModels) { DARABONBA_PTR_SET_RVALUE(deleteAppInstanceModels_, deleteAppInstanceModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAppInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<vector<DeleteAppInstancesResponseBodyDeleteAppInstanceModels>> deleteAppInstanceModels_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
