// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVIRTUALCLUSTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEVIRTUALCLUSTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class DeleteVirtualClusterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVirtualClusterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVirtualClusterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbClusterId, dbClusterId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
    };
    DeleteVirtualClusterResponseBodyData() = default ;
    DeleteVirtualClusterResponseBodyData(const DeleteVirtualClusterResponseBodyData &) = default ;
    DeleteVirtualClusterResponseBodyData(DeleteVirtualClusterResponseBodyData &&) = default ;
    DeleteVirtualClusterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVirtualClusterResponseBodyData() = default ;
    DeleteVirtualClusterResponseBodyData& operator=(const DeleteVirtualClusterResponseBodyData &) = default ;
    DeleteVirtualClusterResponseBodyData& operator=(DeleteVirtualClusterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbClusterId_ == nullptr
        && return this->dbInstanceId_ == nullptr; };
    // dbClusterId Field Functions 
    bool hasDbClusterId() const { return this->dbClusterId_ != nullptr;};
    void deleteDbClusterId() { this->dbClusterId_ = nullptr;};
    inline string dbClusterId() const { DARABONBA_PTR_GET_DEFAULT(dbClusterId_, "") };
    inline DeleteVirtualClusterResponseBodyData& setDbClusterId(string dbClusterId) { DARABONBA_PTR_SET_VALUE(dbClusterId_, dbClusterId) };


    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline DeleteVirtualClusterResponseBodyData& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


  protected:
    std::shared_ptr<string> dbClusterId_ = nullptr;
    std::shared_ptr<string> dbInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
