// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULGLOBALCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVULGLOBALCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVulGlobalConfigResponseBodyVulGlobalConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVulGlobalConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulGlobalConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulGlobalConfigList, vulGlobalConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulGlobalConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulGlobalConfigList, vulGlobalConfigList_);
    };
    ListVulGlobalConfigResponseBody() = default ;
    ListVulGlobalConfigResponseBody(const ListVulGlobalConfigResponseBody &) = default ;
    ListVulGlobalConfigResponseBody(ListVulGlobalConfigResponseBody &&) = default ;
    ListVulGlobalConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulGlobalConfigResponseBody() = default ;
    ListVulGlobalConfigResponseBody& operator=(const ListVulGlobalConfigResponseBody &) = default ;
    ListVulGlobalConfigResponseBody& operator=(ListVulGlobalConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->vulGlobalConfigList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVulGlobalConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulGlobalConfigList Field Functions 
    bool hasVulGlobalConfigList() const { return this->vulGlobalConfigList_ != nullptr;};
    void deleteVulGlobalConfigList() { this->vulGlobalConfigList_ = nullptr;};
    inline const vector<ListVulGlobalConfigResponseBodyVulGlobalConfigList> & vulGlobalConfigList() const { DARABONBA_PTR_GET_CONST(vulGlobalConfigList_, vector<ListVulGlobalConfigResponseBodyVulGlobalConfigList>) };
    inline vector<ListVulGlobalConfigResponseBodyVulGlobalConfigList> vulGlobalConfigList() { DARABONBA_PTR_GET(vulGlobalConfigList_, vector<ListVulGlobalConfigResponseBodyVulGlobalConfigList>) };
    inline ListVulGlobalConfigResponseBody& setVulGlobalConfigList(const vector<ListVulGlobalConfigResponseBodyVulGlobalConfigList> & vulGlobalConfigList) { DARABONBA_PTR_SET_VALUE(vulGlobalConfigList_, vulGlobalConfigList) };
    inline ListVulGlobalConfigResponseBody& setVulGlobalConfigList(vector<ListVulGlobalConfigResponseBodyVulGlobalConfigList> && vulGlobalConfigList) { DARABONBA_PTR_SET_RVALUE(vulGlobalConfigList_, vulGlobalConfigList) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations.
    std::shared_ptr<vector<ListVulGlobalConfigResponseBodyVulGlobalConfigList>> vulGlobalConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
