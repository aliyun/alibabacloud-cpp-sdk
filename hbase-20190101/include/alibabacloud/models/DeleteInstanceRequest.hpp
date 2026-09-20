// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DeleteInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ImmediateDeleteFlag, immediateDeleteFlag_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ImmediateDeleteFlag, immediateDeleteFlag_);
    };
    DeleteInstanceRequest() = default ;
    DeleteInstanceRequest(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest(DeleteInstanceRequest &&) = default ;
    DeleteInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteInstanceRequest() = default ;
    DeleteInstanceRequest& operator=(const DeleteInstanceRequest &) = default ;
    DeleteInstanceRequest& operator=(DeleteInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->immediateDeleteFlag_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteInstanceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // immediateDeleteFlag Field Functions 
    bool hasImmediateDeleteFlag() const { return this->immediateDeleteFlag_ != nullptr;};
    void deleteImmediateDeleteFlag() { this->immediateDeleteFlag_ = nullptr;};
    inline bool getImmediateDeleteFlag() const { DARABONBA_PTR_GET_DEFAULT(immediateDeleteFlag_, false) };
    inline DeleteInstanceRequest& setImmediateDeleteFlag(bool immediateDeleteFlag) { DARABONBA_PTR_SET_VALUE(immediateDeleteFlag_, immediateDeleteFlag) };


  protected:
    // The instance ID of the instance to be released.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to immediately release the instance. Valid values:
    // - **true**: The instance is immediately released.
    // - **false**: The instance is not immediately released and is stored in the recycle bin. This is the default value.
    shared_ptr<bool> immediateDeleteFlag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
