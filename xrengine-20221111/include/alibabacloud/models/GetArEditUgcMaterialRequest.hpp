// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAREDITUGCMATERIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAREDITUGCMATERIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class GetArEditUgcMaterialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArEditUgcMaterialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_TO_JSON(MapId, mapId_);
    };
    friend void from_json(const Darabonba::Json& j, GetArEditUgcMaterialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JwtToken, jwtToken_);
      DARABONBA_PTR_FROM_JSON(MapId, mapId_);
    };
    GetArEditUgcMaterialRequest() = default ;
    GetArEditUgcMaterialRequest(const GetArEditUgcMaterialRequest &) = default ;
    GetArEditUgcMaterialRequest(GetArEditUgcMaterialRequest &&) = default ;
    GetArEditUgcMaterialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArEditUgcMaterialRequest() = default ;
    GetArEditUgcMaterialRequest& operator=(const GetArEditUgcMaterialRequest &) = default ;
    GetArEditUgcMaterialRequest& operator=(GetArEditUgcMaterialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jwtToken_ == nullptr
        && this->mapId_ == nullptr; };
    // jwtToken Field Functions 
    bool hasJwtToken() const { return this->jwtToken_ != nullptr;};
    void deleteJwtToken() { this->jwtToken_ = nullptr;};
    inline string getJwtToken() const { DARABONBA_PTR_GET_DEFAULT(jwtToken_, "") };
    inline GetArEditUgcMaterialRequest& setJwtToken(string jwtToken) { DARABONBA_PTR_SET_VALUE(jwtToken_, jwtToken) };


    // mapId Field Functions 
    bool hasMapId() const { return this->mapId_ != nullptr;};
    void deleteMapId() { this->mapId_ = nullptr;};
    inline int64_t getMapId() const { DARABONBA_PTR_GET_DEFAULT(mapId_, 0L) };
    inline GetArEditUgcMaterialRequest& setMapId(int64_t mapId) { DARABONBA_PTR_SET_VALUE(mapId_, mapId) };


  protected:
    shared_ptr<string> jwtToken_ {};
    shared_ptr<int64_t> mapId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
