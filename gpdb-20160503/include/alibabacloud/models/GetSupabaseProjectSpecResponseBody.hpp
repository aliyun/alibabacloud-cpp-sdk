// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEPROJECTSPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEPROJECTSPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSupabaseProjectSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupabaseProjectSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupabaseProjectSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    GetSupabaseProjectSpecResponseBody() = default ;
    GetSupabaseProjectSpecResponseBody(const GetSupabaseProjectSpecResponseBody &) = default ;
    GetSupabaseProjectSpecResponseBody(GetSupabaseProjectSpecResponseBody &&) = default ;
    GetSupabaseProjectSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupabaseProjectSpecResponseBody() = default ;
    GetSupabaseProjectSpecResponseBody& operator=(const GetSupabaseProjectSpecResponseBody &) = default ;
    GetSupabaseProjectSpecResponseBody& operator=(GetSupabaseProjectSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Free, free_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Visible, visible_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Free, free_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Visible, visible_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->free_ == nullptr
        && this->spec_ == nullptr && this->visible_ == nullptr; };
      // free Field Functions 
      bool hasFree() const { return this->free_ != nullptr;};
      void deleteFree() { this->free_ = nullptr;};
      inline bool getFree() const { DARABONBA_PTR_GET_DEFAULT(free_, false) };
      inline Items& setFree(bool free) { DARABONBA_PTR_SET_VALUE(free_, free) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Items& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // visible Field Functions 
      bool hasVisible() const { return this->visible_ != nullptr;};
      void deleteVisible() { this->visible_ = nullptr;};
      inline bool getVisible() const { DARABONBA_PTR_GET_DEFAULT(visible_, false) };
      inline Items& setVisible(bool visible) { DARABONBA_PTR_SET_VALUE(visible_, visible) };


    protected:
      // Indicates whether the specification is free.
      shared_ptr<bool> free_ {};
      // The specification code.
      shared_ptr<string> spec_ {};
      // Indicates whether the specification is visible.
      shared_ptr<bool> visible_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr && this->zoneIds_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<GetSupabaseProjectSpecResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<GetSupabaseProjectSpecResponseBody::Items>) };
    inline vector<GetSupabaseProjectSpecResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<GetSupabaseProjectSpecResponseBody::Items>) };
    inline GetSupabaseProjectSpecResponseBody& setItems(const vector<GetSupabaseProjectSpecResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetSupabaseProjectSpecResponseBody& setItems(vector<GetSupabaseProjectSpecResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupabaseProjectSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline const vector<string> & getZoneIds() const { DARABONBA_PTR_GET_CONST(zoneIds_, vector<string>) };
    inline vector<string> getZoneIds() { DARABONBA_PTR_GET(zoneIds_, vector<string>) };
    inline GetSupabaseProjectSpecResponseBody& setZoneIds(const vector<string> & zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };
    inline GetSupabaseProjectSpecResponseBody& setZoneIds(vector<string> && zoneIds) { DARABONBA_PTR_SET_RVALUE(zoneIds_, zoneIds) };


  protected:
    // The list of Supabase project specifications.
    shared_ptr<vector<GetSupabaseProjectSpecResponseBody::Items>> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of zone IDs that support creating Supabase projects.
    shared_ptr<vector<string>> zoneIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
