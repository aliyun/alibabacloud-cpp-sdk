// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGELISTRESPONSEBODYSTORAGELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGELISTRESPONSEBODYSTORAGELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStorageListResponseBodyStorageListStorage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageListResponseBodyStorageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageListResponseBodyStorageList& obj) { 
      DARABONBA_PTR_TO_JSON(Storage, storage_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageListResponseBodyStorageList& obj) { 
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
    };
    GetStorageListResponseBodyStorageList() = default ;
    GetStorageListResponseBodyStorageList(const GetStorageListResponseBodyStorageList &) = default ;
    GetStorageListResponseBodyStorageList(GetStorageListResponseBodyStorageList &&) = default ;
    GetStorageListResponseBodyStorageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageListResponseBodyStorageList() = default ;
    GetStorageListResponseBodyStorageList& operator=(const GetStorageListResponseBodyStorageList &) = default ;
    GetStorageListResponseBodyStorageList& operator=(GetStorageListResponseBodyStorageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storage_ != nullptr; };
    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const vector<Models::GetStorageListResponseBodyStorageListStorage> & storage() const { DARABONBA_PTR_GET_CONST(storage_, vector<Models::GetStorageListResponseBodyStorageListStorage>) };
    inline vector<Models::GetStorageListResponseBodyStorageListStorage> storage() { DARABONBA_PTR_GET(storage_, vector<Models::GetStorageListResponseBodyStorageListStorage>) };
    inline GetStorageListResponseBodyStorageList& setStorage(const vector<Models::GetStorageListResponseBodyStorageListStorage> & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline GetStorageListResponseBodyStorageList& setStorage(vector<Models::GetStorageListResponseBodyStorageListStorage> && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


  protected:
    std::shared_ptr<vector<Models::GetStorageListResponseBodyStorageListStorage>> storage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
