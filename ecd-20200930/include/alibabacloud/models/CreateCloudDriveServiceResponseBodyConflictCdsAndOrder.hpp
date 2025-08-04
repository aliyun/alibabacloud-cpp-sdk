// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODYCONFLICTCDSANDORDER_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICERESPONSEBODYCONFLICTCDSANDORDER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds.hpp>
#include <alibabacloud/models/CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCloudDriveServiceResponseBodyConflictCdsAndOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudDriveServiceResponseBodyConflictCdsAndOrder& obj) { 
      DARABONBA_PTR_TO_JSON(ConflictCds, conflictCds_);
      DARABONBA_PTR_TO_JSON(ConflictOrder, conflictOrder_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudDriveServiceResponseBodyConflictCdsAndOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(ConflictCds, conflictCds_);
      DARABONBA_PTR_FROM_JSON(ConflictOrder, conflictOrder_);
    };
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrder() = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrder(const CreateCloudDriveServiceResponseBodyConflictCdsAndOrder &) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrder(CreateCloudDriveServiceResponseBodyConflictCdsAndOrder &&) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudDriveServiceResponseBodyConflictCdsAndOrder() = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrder& operator=(const CreateCloudDriveServiceResponseBodyConflictCdsAndOrder &) = default ;
    CreateCloudDriveServiceResponseBodyConflictCdsAndOrder& operator=(CreateCloudDriveServiceResponseBodyConflictCdsAndOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conflictCds_ != nullptr
        && this->conflictOrder_ != nullptr; };
    // conflictCds Field Functions 
    bool hasConflictCds() const { return this->conflictCds_ != nullptr;};
    void deleteConflictCds() { this->conflictCds_ = nullptr;};
    inline const vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds> & conflictCds() const { DARABONBA_PTR_GET_CONST(conflictCds_, vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds>) };
    inline vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds> conflictCds() { DARABONBA_PTR_GET(conflictCds_, vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds>) };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrder& setConflictCds(const vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds> & conflictCds) { DARABONBA_PTR_SET_VALUE(conflictCds_, conflictCds) };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrder& setConflictCds(vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds> && conflictCds) { DARABONBA_PTR_SET_RVALUE(conflictCds_, conflictCds) };


    // conflictOrder Field Functions 
    bool hasConflictOrder() const { return this->conflictOrder_ != nullptr;};
    void deleteConflictOrder() { this->conflictOrder_ = nullptr;};
    inline const vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder> & conflictOrder() const { DARABONBA_PTR_GET_CONST(conflictOrder_, vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder>) };
    inline vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder> conflictOrder() { DARABONBA_PTR_GET(conflictOrder_, vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder>) };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrder& setConflictOrder(const vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder> & conflictOrder) { DARABONBA_PTR_SET_VALUE(conflictOrder_, conflictOrder) };
    inline CreateCloudDriveServiceResponseBodyConflictCdsAndOrder& setConflictOrder(vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder> && conflictOrder) { DARABONBA_PTR_SET_RVALUE(conflictOrder_, conflictOrder) };


  protected:
    // The conflicting enterprise drive.
    std::shared_ptr<vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictCds>> conflictCds_ = nullptr;
    // The subscription orders of the conflicting enterprise drives that are unpaid.
    std::shared_ptr<vector<Models::CreateCloudDriveServiceResponseBodyConflictCdsAndOrderConflictOrder>> conflictOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
