// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNIONIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUNIONIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetUnionIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnionIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdType, idType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnionIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
      DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdType, idType_);
    };
    GetUnionIdRequest() = default ;
    GetUnionIdRequest(const GetUnionIdRequest &) = default ;
    GetUnionIdRequest(GetUnionIdRequest &&) = default ;
    GetUnionIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnionIdRequest() = default ;
    GetUnionIdRequest& operator=(const GetUnionIdRequest &) = default ;
    GetUnionIdRequest& operator=(GetUnionIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr; };
    // encodeKey Field Functions 
    bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
    void deleteEncodeKey() { this->encodeKey_ = nullptr;};
    inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
    inline GetUnionIdRequest& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


    // encodeType Field Functions 
    bool hasEncodeType() const { return this->encodeType_ != nullptr;};
    void deleteEncodeType() { this->encodeType_ = nullptr;};
    inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
    inline GetUnionIdRequest& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetUnionIdRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idType Field Functions 
    bool hasIdType() const { return this->idType_ != nullptr;};
    void deleteIdType() { this->idType_ = nullptr;};
    inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
    inline GetUnionIdRequest& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


  protected:
    // This parameter is required.
    shared_ptr<string> encodeKey_ {};
    // This parameter is required.
    shared_ptr<string> encodeType_ {};
    // This parameter is required.
    shared_ptr<string> id_ {};
    // This parameter is required.
    shared_ptr<string> idType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
