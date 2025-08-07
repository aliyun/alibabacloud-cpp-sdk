// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORSRESPONSEBODYMODELITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETERRORSRESPONSEBODYMODELITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetErrorsResponseBodyModelItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorsResponseBodyModelItems& obj) { 
      DARABONBA_PTR_TO_JSON(ClientTime, clientTime_);
      DARABONBA_PTR_TO_JSON(Did, did_);
      DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_TO_JSON(Utdid, utdid_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorsResponseBodyModelItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientTime, clientTime_);
      DARABONBA_PTR_FROM_JSON(Did, did_);
      DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
      DARABONBA_PTR_FROM_JSON(Utdid, utdid_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetErrorsResponseBodyModelItems() = default ;
    GetErrorsResponseBodyModelItems(const GetErrorsResponseBodyModelItems &) = default ;
    GetErrorsResponseBodyModelItems(GetErrorsResponseBodyModelItems &&) = default ;
    GetErrorsResponseBodyModelItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorsResponseBodyModelItems() = default ;
    GetErrorsResponseBodyModelItems& operator=(const GetErrorsResponseBodyModelItems &) = default ;
    GetErrorsResponseBodyModelItems& operator=(GetErrorsResponseBodyModelItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientTime_ != nullptr
        && this->did_ != nullptr && this->digestHash_ != nullptr && this->utdid_ != nullptr && this->uuid_ != nullptr; };
    // clientTime Field Functions 
    bool hasClientTime() const { return this->clientTime_ != nullptr;};
    void deleteClientTime() { this->clientTime_ = nullptr;};
    inline int64_t clientTime() const { DARABONBA_PTR_GET_DEFAULT(clientTime_, 0L) };
    inline GetErrorsResponseBodyModelItems& setClientTime(int64_t clientTime) { DARABONBA_PTR_SET_VALUE(clientTime_, clientTime) };


    // did Field Functions 
    bool hasDid() const { return this->did_ != nullptr;};
    void deleteDid() { this->did_ = nullptr;};
    inline string did() const { DARABONBA_PTR_GET_DEFAULT(did_, "") };
    inline GetErrorsResponseBodyModelItems& setDid(string did) { DARABONBA_PTR_SET_VALUE(did_, did) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string digestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetErrorsResponseBodyModelItems& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // utdid Field Functions 
    bool hasUtdid() const { return this->utdid_ != nullptr;};
    void deleteUtdid() { this->utdid_ = nullptr;};
    inline string utdid() const { DARABONBA_PTR_GET_DEFAULT(utdid_, "") };
    inline GetErrorsResponseBodyModelItems& setUtdid(string utdid) { DARABONBA_PTR_SET_VALUE(utdid_, utdid) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetErrorsResponseBodyModelItems& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<int64_t> clientTime_ = nullptr;
    std::shared_ptr<string> did_ = nullptr;
    std::shared_ptr<string> digestHash_ = nullptr;
    // Utdid
    std::shared_ptr<string> utdid_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
