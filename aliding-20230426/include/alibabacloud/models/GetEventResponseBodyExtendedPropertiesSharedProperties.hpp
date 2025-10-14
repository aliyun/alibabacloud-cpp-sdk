// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYEXTENDEDPROPERTIESSHAREDPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTRESPONSEBODYEXTENDEDPROPERTIESSHAREDPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetEventResponseBodyExtendedPropertiesSharedProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventResponseBodyExtendedPropertiesSharedProperties& obj) { 
      DARABONBA_PTR_TO_JSON(BelongCorpId, belongCorpId_);
      DARABONBA_PTR_TO_JSON(SourceOpenCid, sourceOpenCid_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventResponseBodyExtendedPropertiesSharedProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongCorpId, belongCorpId_);
      DARABONBA_PTR_FROM_JSON(SourceOpenCid, sourceOpenCid_);
    };
    GetEventResponseBodyExtendedPropertiesSharedProperties() = default ;
    GetEventResponseBodyExtendedPropertiesSharedProperties(const GetEventResponseBodyExtendedPropertiesSharedProperties &) = default ;
    GetEventResponseBodyExtendedPropertiesSharedProperties(GetEventResponseBodyExtendedPropertiesSharedProperties &&) = default ;
    GetEventResponseBodyExtendedPropertiesSharedProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventResponseBodyExtendedPropertiesSharedProperties() = default ;
    GetEventResponseBodyExtendedPropertiesSharedProperties& operator=(const GetEventResponseBodyExtendedPropertiesSharedProperties &) = default ;
    GetEventResponseBodyExtendedPropertiesSharedProperties& operator=(GetEventResponseBodyExtendedPropertiesSharedProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongCorpId_ == nullptr
        && return this->sourceOpenCid_ == nullptr; };
    // belongCorpId Field Functions 
    bool hasBelongCorpId() const { return this->belongCorpId_ != nullptr;};
    void deleteBelongCorpId() { this->belongCorpId_ = nullptr;};
    inline string belongCorpId() const { DARABONBA_PTR_GET_DEFAULT(belongCorpId_, "") };
    inline GetEventResponseBodyExtendedPropertiesSharedProperties& setBelongCorpId(string belongCorpId) { DARABONBA_PTR_SET_VALUE(belongCorpId_, belongCorpId) };


    // sourceOpenCid Field Functions 
    bool hasSourceOpenCid() const { return this->sourceOpenCid_ != nullptr;};
    void deleteSourceOpenCid() { this->sourceOpenCid_ = nullptr;};
    inline string sourceOpenCid() const { DARABONBA_PTR_GET_DEFAULT(sourceOpenCid_, "") };
    inline GetEventResponseBodyExtendedPropertiesSharedProperties& setSourceOpenCid(string sourceOpenCid) { DARABONBA_PTR_SET_VALUE(sourceOpenCid_, sourceOpenCid) };


  protected:
    std::shared_ptr<string> belongCorpId_ = nullptr;
    std::shared_ptr<string> sourceOpenCid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
