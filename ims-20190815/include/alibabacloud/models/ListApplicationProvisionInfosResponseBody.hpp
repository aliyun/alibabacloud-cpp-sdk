// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONPROVISIONINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListApplicationProvisionInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationProvisionInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationProvisionInfos, applicationProvisionInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationProvisionInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationProvisionInfos, applicationProvisionInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListApplicationProvisionInfosResponseBody() = default ;
    ListApplicationProvisionInfosResponseBody(const ListApplicationProvisionInfosResponseBody &) = default ;
    ListApplicationProvisionInfosResponseBody(ListApplicationProvisionInfosResponseBody &&) = default ;
    ListApplicationProvisionInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationProvisionInfosResponseBody() = default ;
    ListApplicationProvisionInfosResponseBody& operator=(const ListApplicationProvisionInfosResponseBody &) = default ;
    ListApplicationProvisionInfosResponseBody& operator=(ListApplicationProvisionInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationProvisionInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // applicationProvisionInfos Field Functions 
    bool hasApplicationProvisionInfos() const { return this->applicationProvisionInfos_ != nullptr;};
    void deleteApplicationProvisionInfos() { this->applicationProvisionInfos_ = nullptr;};
    inline const ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos & applicationProvisionInfos() const { DARABONBA_PTR_GET_CONST(applicationProvisionInfos_, ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos) };
    inline ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos applicationProvisionInfos() { DARABONBA_PTR_GET(applicationProvisionInfos_, ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos) };
    inline ListApplicationProvisionInfosResponseBody& setApplicationProvisionInfos(const ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos & applicationProvisionInfos) { DARABONBA_PTR_SET_VALUE(applicationProvisionInfos_, applicationProvisionInfos) };
    inline ListApplicationProvisionInfosResponseBody& setApplicationProvisionInfos(ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos && applicationProvisionInfos) { DARABONBA_PTR_SET_RVALUE(applicationProvisionInfos_, applicationProvisionInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationProvisionInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the installed applications.
    std::shared_ptr<ListApplicationProvisionInfosResponseBodyApplicationProvisionInfos> applicationProvisionInfos_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
