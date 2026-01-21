// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTBSNCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTBSNCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bsn20150512
{
namespace Models
{
  class GrantBsnCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantBsnCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(GrantToAliuid, grantToAliuid_);
      DARABONBA_PTR_TO_JSON(Notes, notes_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, GrantBsnCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(GrantToAliuid, grantToAliuid_);
      DARABONBA_PTR_FROM_JSON(Notes, notes_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    GrantBsnCodeRequest() = default ;
    GrantBsnCodeRequest(const GrantBsnCodeRequest &) = default ;
    GrantBsnCodeRequest(GrantBsnCodeRequest &&) = default ;
    GrantBsnCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantBsnCodeRequest() = default ;
    GrantBsnCodeRequest& operator=(const GrantBsnCodeRequest &) = default ;
    GrantBsnCodeRequest& operator=(GrantBsnCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->grantToAliuid_ == nullptr && this->notes_ == nullptr && this->sn_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GrantBsnCodeRequest& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // grantToAliuid Field Functions 
    bool hasGrantToAliuid() const { return this->grantToAliuid_ != nullptr;};
    void deleteGrantToAliuid() { this->grantToAliuid_ = nullptr;};
    inline int64_t getGrantToAliuid() const { DARABONBA_PTR_GET_DEFAULT(grantToAliuid_, 0L) };
    inline GrantBsnCodeRequest& setGrantToAliuid(int64_t grantToAliuid) { DARABONBA_PTR_SET_VALUE(grantToAliuid_, grantToAliuid) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string getNotes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline GrantBsnCodeRequest& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline GrantBsnCodeRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> aliUid_ {};
    // This parameter is required.
    shared_ptr<int64_t> grantToAliuid_ {};
    shared_ptr<string> notes_ {};
    // This parameter is required.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bsn20150512
#endif
