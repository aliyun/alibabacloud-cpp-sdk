// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETESVCMAPBINDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETESVCMAPBINDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class BatchDeleteSvcMapBindShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteSvcMapBindShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteSvcMapBindShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
    };
    BatchDeleteSvcMapBindShrinkRequest() = default ;
    BatchDeleteSvcMapBindShrinkRequest(const BatchDeleteSvcMapBindShrinkRequest &) = default ;
    BatchDeleteSvcMapBindShrinkRequest(BatchDeleteSvcMapBindShrinkRequest &&) = default ;
    BatchDeleteSvcMapBindShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteSvcMapBindShrinkRequest() = default ;
    BatchDeleteSvcMapBindShrinkRequest& operator=(const BatchDeleteSvcMapBindShrinkRequest &) = default ;
    BatchDeleteSvcMapBindShrinkRequest& operator=(BatchDeleteSvcMapBindShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idsShrink_ == nullptr
        && this->jwtToken_ == nullptr; };
    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string getIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline BatchDeleteSvcMapBindShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline BatchDeleteSvcMapBindShrinkRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> idsShrink_ {};
    shared_ptr<string> jwtToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
