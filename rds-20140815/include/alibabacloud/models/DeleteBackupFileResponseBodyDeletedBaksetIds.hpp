// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBACKUPFILERESPONSEBODYDELETEDBAKSETIDS_HPP_
#define ALIBABACLOUD_MODELS_DELETEBACKUPFILERESPONSEBODYDELETEDBAKSETIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DeleteBackupFileResponseBodyDeletedBaksetIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBackupFileResponseBodyDeletedBaksetIds& obj) { 
      DARABONBA_PTR_TO_JSON(DeletedBaksetIds, deletedBaksetIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBackupFileResponseBodyDeletedBaksetIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletedBaksetIds, deletedBaksetIds_);
    };
    DeleteBackupFileResponseBodyDeletedBaksetIds() = default ;
    DeleteBackupFileResponseBodyDeletedBaksetIds(const DeleteBackupFileResponseBodyDeletedBaksetIds &) = default ;
    DeleteBackupFileResponseBodyDeletedBaksetIds(DeleteBackupFileResponseBodyDeletedBaksetIds &&) = default ;
    DeleteBackupFileResponseBodyDeletedBaksetIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBackupFileResponseBodyDeletedBaksetIds() = default ;
    DeleteBackupFileResponseBodyDeletedBaksetIds& operator=(const DeleteBackupFileResponseBodyDeletedBaksetIds &) = default ;
    DeleteBackupFileResponseBodyDeletedBaksetIds& operator=(DeleteBackupFileResponseBodyDeletedBaksetIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletedBaksetIds_ == nullptr; };
    // deletedBaksetIds Field Functions 
    bool hasDeletedBaksetIds() const { return this->deletedBaksetIds_ != nullptr;};
    void deleteDeletedBaksetIds() { this->deletedBaksetIds_ = nullptr;};
    inline const vector<int32_t> & deletedBaksetIds() const { DARABONBA_PTR_GET_CONST(deletedBaksetIds_, vector<int32_t>) };
    inline vector<int32_t> deletedBaksetIds() { DARABONBA_PTR_GET(deletedBaksetIds_, vector<int32_t>) };
    inline DeleteBackupFileResponseBodyDeletedBaksetIds& setDeletedBaksetIds(const vector<int32_t> & deletedBaksetIds) { DARABONBA_PTR_SET_VALUE(deletedBaksetIds_, deletedBaksetIds) };
    inline DeleteBackupFileResponseBodyDeletedBaksetIds& setDeletedBaksetIds(vector<int32_t> && deletedBaksetIds) { DARABONBA_PTR_SET_RVALUE(deletedBaksetIds_, deletedBaksetIds) };


  protected:
    std::shared_ptr<vector<int32_t>> deletedBaksetIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
