// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPBUSINESSINSTANCEQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRIPBUSINESSINSTANCEQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripBusinessInstanceQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripBusinessInstanceQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, TripBusinessInstanceQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    TripBusinessInstanceQueryResponseBodyModule() = default ;
    TripBusinessInstanceQueryResponseBodyModule(const TripBusinessInstanceQueryResponseBodyModule &) = default ;
    TripBusinessInstanceQueryResponseBodyModule(TripBusinessInstanceQueryResponseBodyModule &&) = default ;
    TripBusinessInstanceQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripBusinessInstanceQueryResponseBodyModule() = default ;
    TripBusinessInstanceQueryResponseBodyModule& operator=(const TripBusinessInstanceQueryResponseBodyModule &) = default ;
    TripBusinessInstanceQueryResponseBodyModule& operator=(TripBusinessInstanceQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creator_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->status_ != nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline TripBusinessInstanceQueryResponseBodyModule& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline TripBusinessInstanceQueryResponseBodyModule& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline TripBusinessInstanceQueryResponseBodyModule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline TripBusinessInstanceQueryResponseBodyModule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
