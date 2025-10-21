// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMODELINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMODELINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class DeleteModelInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteModelInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModelInstanceIdList, modelInstanceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteModelInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelInstanceIdList, modelInstanceIdList_);
    };
    DeleteModelInstanceRequest() = default ;
    DeleteModelInstanceRequest(const DeleteModelInstanceRequest &) = default ;
    DeleteModelInstanceRequest(DeleteModelInstanceRequest &&) = default ;
    DeleteModelInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteModelInstanceRequest() = default ;
    DeleteModelInstanceRequest& operator=(const DeleteModelInstanceRequest &) = default ;
    DeleteModelInstanceRequest& operator=(DeleteModelInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelInstanceIdList_ == nullptr; };
    // modelInstanceIdList Field Functions 
    bool hasModelInstanceIdList() const { return this->modelInstanceIdList_ != nullptr;};
    void deleteModelInstanceIdList() { this->modelInstanceIdList_ = nullptr;};
    inline const vector<int64_t> & modelInstanceIdList() const { DARABONBA_PTR_GET_CONST(modelInstanceIdList_, vector<int64_t>) };
    inline vector<int64_t> modelInstanceIdList() { DARABONBA_PTR_GET(modelInstanceIdList_, vector<int64_t>) };
    inline DeleteModelInstanceRequest& setModelInstanceIdList(const vector<int64_t> & modelInstanceIdList) { DARABONBA_PTR_SET_VALUE(modelInstanceIdList_, modelInstanceIdList) };
    inline DeleteModelInstanceRequest& setModelInstanceIdList(vector<int64_t> && modelInstanceIdList) { DARABONBA_PTR_SET_RVALUE(modelInstanceIdList_, modelInstanceIdList) };


  protected:
    std::shared_ptr<vector<int64_t>> modelInstanceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
