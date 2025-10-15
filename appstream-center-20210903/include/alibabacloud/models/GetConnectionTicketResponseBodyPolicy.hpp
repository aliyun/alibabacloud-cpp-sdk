// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETCONNECTIONTICKETRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210903
{
namespace Models
{
  class GetConnectionTicketResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConnectionTicketResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ResolutionAdaptive, resolutionAdaptive_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
    };
    friend void from_json(const Darabonba::Json& j, GetConnectionTicketResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ResolutionAdaptive, resolutionAdaptive_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
    };
    GetConnectionTicketResponseBodyPolicy() = default ;
    GetConnectionTicketResponseBodyPolicy(const GetConnectionTicketResponseBodyPolicy &) = default ;
    GetConnectionTicketResponseBodyPolicy(GetConnectionTicketResponseBodyPolicy &&) = default ;
    GetConnectionTicketResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConnectionTicketResponseBodyPolicy() = default ;
    GetConnectionTicketResponseBodyPolicy& operator=(const GetConnectionTicketResponseBodyPolicy &) = default ;
    GetConnectionTicketResponseBodyPolicy& operator=(GetConnectionTicketResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resolutionAdaptive_ == nullptr
        && return this->resolutionHeight_ == nullptr && return this->resolutionWidth_ == nullptr; };
    // resolutionAdaptive Field Functions 
    bool hasResolutionAdaptive() const { return this->resolutionAdaptive_ != nullptr;};
    void deleteResolutionAdaptive() { this->resolutionAdaptive_ = nullptr;};
    inline string resolutionAdaptive() const { DARABONBA_PTR_GET_DEFAULT(resolutionAdaptive_, "") };
    inline GetConnectionTicketResponseBodyPolicy& setResolutionAdaptive(string resolutionAdaptive) { DARABONBA_PTR_SET_VALUE(resolutionAdaptive_, resolutionAdaptive) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline GetConnectionTicketResponseBodyPolicy& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline GetConnectionTicketResponseBodyPolicy& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


  protected:
    std::shared_ptr<string> resolutionAdaptive_ = nullptr;
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210903
#endif
