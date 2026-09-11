// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKVCACHESTOREAVAILABLEVSCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKVCACHESTOREAVAILABLEVSCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kvcachestore20260617
{
namespace Models
{
  class ListKVCacheStoreAvailableVscsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKVCacheStoreAvailableVscsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vscs, vscs_);
    };
    friend void from_json(const Darabonba::Json& j, ListKVCacheStoreAvailableVscsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vscs, vscs_);
    };
    ListKVCacheStoreAvailableVscsResponseBody() = default ;
    ListKVCacheStoreAvailableVscsResponseBody(const ListKVCacheStoreAvailableVscsResponseBody &) = default ;
    ListKVCacheStoreAvailableVscsResponseBody(ListKVCacheStoreAvailableVscsResponseBody &&) = default ;
    ListKVCacheStoreAvailableVscsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKVCacheStoreAvailableVscsResponseBody() = default ;
    ListKVCacheStoreAvailableVscsResponseBody& operator=(const ListKVCacheStoreAvailableVscsResponseBody &) = default ;
    ListKVCacheStoreAvailableVscsResponseBody& operator=(ListKVCacheStoreAvailableVscsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Vscs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Vscs& obj) { 
        DARABONBA_PTR_TO_JSON(VscId, vscId_);
        DARABONBA_PTR_TO_JSON(VscStatus, vscStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Vscs& obj) { 
        DARABONBA_PTR_FROM_JSON(VscId, vscId_);
        DARABONBA_PTR_FROM_JSON(VscStatus, vscStatus_);
      };
      Vscs() = default ;
      Vscs(const Vscs &) = default ;
      Vscs(Vscs &&) = default ;
      Vscs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Vscs() = default ;
      Vscs& operator=(const Vscs &) = default ;
      Vscs& operator=(Vscs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vscId_ == nullptr
        && this->vscStatus_ == nullptr; };
      // vscId Field Functions 
      bool hasVscId() const { return this->vscId_ != nullptr;};
      void deleteVscId() { this->vscId_ = nullptr;};
      inline string getVscId() const { DARABONBA_PTR_GET_DEFAULT(vscId_, "") };
      inline Vscs& setVscId(string vscId) { DARABONBA_PTR_SET_VALUE(vscId_, vscId) };


      // vscStatus Field Functions 
      bool hasVscStatus() const { return this->vscStatus_ != nullptr;};
      void deleteVscStatus() { this->vscStatus_ = nullptr;};
      inline string getVscStatus() const { DARABONBA_PTR_GET_DEFAULT(vscStatus_, "") };
      inline Vscs& setVscStatus(string vscStatus) { DARABONBA_PTR_SET_VALUE(vscStatus_, vscStatus) };


    protected:
      // The VSC device ID.
      shared_ptr<string> vscId_ {};
      // The current status of the VSC device.
      shared_ptr<string> vscStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->vscs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKVCacheStoreAvailableVscsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vscs Field Functions 
    bool hasVscs() const { return this->vscs_ != nullptr;};
    void deleteVscs() { this->vscs_ = nullptr;};
    inline const vector<ListKVCacheStoreAvailableVscsResponseBody::Vscs> & getVscs() const { DARABONBA_PTR_GET_CONST(vscs_, vector<ListKVCacheStoreAvailableVscsResponseBody::Vscs>) };
    inline vector<ListKVCacheStoreAvailableVscsResponseBody::Vscs> getVscs() { DARABONBA_PTR_GET(vscs_, vector<ListKVCacheStoreAvailableVscsResponseBody::Vscs>) };
    inline ListKVCacheStoreAvailableVscsResponseBody& setVscs(const vector<ListKVCacheStoreAvailableVscsResponseBody::Vscs> & vscs) { DARABONBA_PTR_SET_VALUE(vscs_, vscs) };
    inline ListKVCacheStoreAvailableVscsResponseBody& setVscs(vector<ListKVCacheStoreAvailableVscsResponseBody::Vscs> && vscs) { DARABONBA_PTR_SET_RVALUE(vscs_, vscs) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of available VSC resources.
    shared_ptr<vector<ListKVCacheStoreAvailableVscsResponseBody::Vscs>> vscs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kvcachestore20260617
#endif
