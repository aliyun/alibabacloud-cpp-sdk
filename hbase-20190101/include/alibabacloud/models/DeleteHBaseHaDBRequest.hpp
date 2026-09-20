// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHBASEHADBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHBASEHADBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DeleteHBaseHaDBRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHBaseHaDBRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BdsId, bdsId_);
      DARABONBA_PTR_TO_JSON(HaId, haId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHBaseHaDBRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BdsId, bdsId_);
      DARABONBA_PTR_FROM_JSON(HaId, haId_);
    };
    DeleteHBaseHaDBRequest() = default ;
    DeleteHBaseHaDBRequest(const DeleteHBaseHaDBRequest &) = default ;
    DeleteHBaseHaDBRequest(DeleteHBaseHaDBRequest &&) = default ;
    DeleteHBaseHaDBRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHBaseHaDBRequest() = default ;
    DeleteHBaseHaDBRequest& operator=(const DeleteHBaseHaDBRequest &) = default ;
    DeleteHBaseHaDBRequest& operator=(DeleteHBaseHaDBRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bdsId_ == nullptr
        && this->haId_ == nullptr; };
    // bdsId Field Functions 
    bool hasBdsId() const { return this->bdsId_ != nullptr;};
    void deleteBdsId() { this->bdsId_ = nullptr;};
    inline string getBdsId() const { DARABONBA_PTR_GET_DEFAULT(bdsId_, "") };
    inline DeleteHBaseHaDBRequest& setBdsId(string bdsId) { DARABONBA_PTR_SET_VALUE(bdsId_, bdsId) };


    // haId Field Functions 
    bool hasHaId() const { return this->haId_ != nullptr;};
    void deleteHaId() { this->haId_ = nullptr;};
    inline string getHaId() const { DARABONBA_PTR_GET_DEFAULT(haId_, "") };
    inline DeleteHBaseHaDBRequest& setHaId(string haId) { DARABONBA_PTR_SET_VALUE(haId_, haId) };


  protected:
    // The ID of the BDS cluster.
    // 
    // This parameter is required.
    shared_ptr<string> bdsId_ {};
    // The ID of the HA instance. You can call the QueryHBaseHaDB operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<string> haId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
