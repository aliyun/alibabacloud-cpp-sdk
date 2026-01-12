// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATESVCMAPBINDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATESVCMAPBINDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class BatchCreateSvcMapBindShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateSvcMapBindShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(MapIds, mapIdsShrink_);
      DARABONBA_PTR_TO_JSON(SvcId, svcId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateSvcMapBindShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(MapIds, mapIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SvcId, svcId_);
    };
    BatchCreateSvcMapBindShrinkRequest() = default ;
    BatchCreateSvcMapBindShrinkRequest(const BatchCreateSvcMapBindShrinkRequest &) = default ;
    BatchCreateSvcMapBindShrinkRequest(BatchCreateSvcMapBindShrinkRequest &&) = default ;
    BatchCreateSvcMapBindShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateSvcMapBindShrinkRequest() = default ;
    BatchCreateSvcMapBindShrinkRequest& operator=(const BatchCreateSvcMapBindShrinkRequest &) = default ;
    BatchCreateSvcMapBindShrinkRequest& operator=(BatchCreateSvcMapBindShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jwtToken_ == nullptr
        && this->mapIdsShrink_ == nullptr && this->svcId_ == nullptr; };
    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline BatchCreateSvcMapBindShrinkRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // mapIdsShrink Field Functions 
    bool hasMapIdsShrink() const { return this->mapIdsShrink_ != nullptr;};
    void deleteMapIdsShrink() { this->mapIdsShrink_ = nullptr;};
    inline string getMapIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(mapIdsShrink_, "") };
    inline BatchCreateSvcMapBindShrinkRequest& setMapIdsShrink(string mapIdsShrink) { DARABONBA_PTR_SET_VALUE(mapIdsShrink_, mapIdsShrink) };


    // svcId Field Functions 
    bool hasSvcId() const { return this->svcId_ != nullptr;};
    void deleteSvcId() { this->svcId_ = nullptr;};
    inline int64_t getSvcId() const { DARABONBA_PTR_GET_DEFAULT(svcId_, 0L) };
    inline BatchCreateSvcMapBindShrinkRequest& setSvcId(int64_t svcId) { DARABONBA_PTR_SET_VALUE(svcId_, svcId) };


  protected:
    shared_ptr<string> jwtToken_ {};
    // This parameter is required.
    shared_ptr<string> mapIdsShrink_ {};
    shared_ptr<int64_t> svcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
