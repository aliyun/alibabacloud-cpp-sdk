// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHBASEHASLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHBASEHASLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DeleteHbaseHaSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHbaseHaSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BdsId, bdsId_);
      DARABONBA_PTR_TO_JSON(HaId, haId_);
      DARABONBA_PTR_TO_JSON(HaTypes, haTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHbaseHaSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BdsId, bdsId_);
      DARABONBA_PTR_FROM_JSON(HaId, haId_);
      DARABONBA_PTR_FROM_JSON(HaTypes, haTypes_);
    };
    DeleteHbaseHaSlbRequest() = default ;
    DeleteHbaseHaSlbRequest(const DeleteHbaseHaSlbRequest &) = default ;
    DeleteHbaseHaSlbRequest(DeleteHbaseHaSlbRequest &&) = default ;
    DeleteHbaseHaSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHbaseHaSlbRequest() = default ;
    DeleteHbaseHaSlbRequest& operator=(const DeleteHbaseHaSlbRequest &) = default ;
    DeleteHbaseHaSlbRequest& operator=(DeleteHbaseHaSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bdsId_ == nullptr
        && this->haId_ == nullptr && this->haTypes_ == nullptr; };
    // bdsId Field Functions 
    bool hasBdsId() const { return this->bdsId_ != nullptr;};
    void deleteBdsId() { this->bdsId_ = nullptr;};
    inline string getBdsId() const { DARABONBA_PTR_GET_DEFAULT(bdsId_, "") };
    inline DeleteHbaseHaSlbRequest& setBdsId(string bdsId) { DARABONBA_PTR_SET_VALUE(bdsId_, bdsId) };


    // haId Field Functions 
    bool hasHaId() const { return this->haId_ != nullptr;};
    void deleteHaId() { this->haId_ = nullptr;};
    inline string getHaId() const { DARABONBA_PTR_GET_DEFAULT(haId_, "") };
    inline DeleteHbaseHaSlbRequest& setHaId(string haId) { DARABONBA_PTR_SET_VALUE(haId_, haId) };


    // haTypes Field Functions 
    bool hasHaTypes() const { return this->haTypes_ != nullptr;};
    void deleteHaTypes() { this->haTypes_ = nullptr;};
    inline string getHaTypes() const { DARABONBA_PTR_GET_DEFAULT(haTypes_, "") };
    inline DeleteHbaseHaSlbRequest& setHaTypes(string haTypes) { DARABONBA_PTR_SET_VALUE(haTypes_, haTypes) };


  protected:
    // The ID of the BDS cluster.
    // 
    // This parameter is required.
    shared_ptr<string> bdsId_ {};
    // The high availability ID in BDS high availability management.
    // 
    // This parameter is required.
    shared_ptr<string> haId_ {};
    // The high availability type. Valid values:
    // 1. thrift
    // 2. phoenix.
    // 
    // This parameter is required.
    shared_ptr<string> haTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
