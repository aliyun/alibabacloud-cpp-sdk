// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSEXTENDEDPROPERTIESSHAREDPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSRESPONSEBODYEVENTSEXTENDEDPROPERTIESSHAREDPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsResponseBodyEventsExtendedPropertiesSharedProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsResponseBodyEventsExtendedPropertiesSharedProperties& obj) { 
      DARABONBA_PTR_TO_JSON(BelongCorpId, belongCorpId_);
      DARABONBA_PTR_TO_JSON(SourceOpenCid, sourceOpenCid_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsResponseBodyEventsExtendedPropertiesSharedProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongCorpId, belongCorpId_);
      DARABONBA_PTR_FROM_JSON(SourceOpenCid, sourceOpenCid_);
    };
    ListEventsResponseBodyEventsExtendedPropertiesSharedProperties() = default ;
    ListEventsResponseBodyEventsExtendedPropertiesSharedProperties(const ListEventsResponseBodyEventsExtendedPropertiesSharedProperties &) = default ;
    ListEventsResponseBodyEventsExtendedPropertiesSharedProperties(ListEventsResponseBodyEventsExtendedPropertiesSharedProperties &&) = default ;
    ListEventsResponseBodyEventsExtendedPropertiesSharedProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsResponseBodyEventsExtendedPropertiesSharedProperties() = default ;
    ListEventsResponseBodyEventsExtendedPropertiesSharedProperties& operator=(const ListEventsResponseBodyEventsExtendedPropertiesSharedProperties &) = default ;
    ListEventsResponseBodyEventsExtendedPropertiesSharedProperties& operator=(ListEventsResponseBodyEventsExtendedPropertiesSharedProperties &&) = default ;
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
    inline ListEventsResponseBodyEventsExtendedPropertiesSharedProperties& setBelongCorpId(string belongCorpId) { DARABONBA_PTR_SET_VALUE(belongCorpId_, belongCorpId) };


    // sourceOpenCid Field Functions 
    bool hasSourceOpenCid() const { return this->sourceOpenCid_ != nullptr;};
    void deleteSourceOpenCid() { this->sourceOpenCid_ = nullptr;};
    inline string sourceOpenCid() const { DARABONBA_PTR_GET_DEFAULT(sourceOpenCid_, "") };
    inline ListEventsResponseBodyEventsExtendedPropertiesSharedProperties& setSourceOpenCid(string sourceOpenCid) { DARABONBA_PTR_SET_VALUE(sourceOpenCid_, sourceOpenCid) };


  protected:
    std::shared_ptr<string> belongCorpId_ = nullptr;
    std::shared_ptr<string> sourceOpenCid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
