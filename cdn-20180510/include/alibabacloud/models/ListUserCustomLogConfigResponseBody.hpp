// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCUSTOMLOGCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCUSTOMLOGCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserCustomLogConfigResponseBodyConfigIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListUserCustomLogConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserCustomLogConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigIds, configIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserCustomLogConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigIds, configIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserCustomLogConfigResponseBody() = default ;
    ListUserCustomLogConfigResponseBody(const ListUserCustomLogConfigResponseBody &) = default ;
    ListUserCustomLogConfigResponseBody(ListUserCustomLogConfigResponseBody &&) = default ;
    ListUserCustomLogConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserCustomLogConfigResponseBody() = default ;
    ListUserCustomLogConfigResponseBody& operator=(const ListUserCustomLogConfigResponseBody &) = default ;
    ListUserCustomLogConfigResponseBody& operator=(ListUserCustomLogConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configIds_ != nullptr
        && this->requestId_ != nullptr; };
    // configIds Field Functions 
    bool hasConfigIds() const { return this->configIds_ != nullptr;};
    void deleteConfigIds() { this->configIds_ = nullptr;};
    inline const ListUserCustomLogConfigResponseBodyConfigIds & configIds() const { DARABONBA_PTR_GET_CONST(configIds_, ListUserCustomLogConfigResponseBodyConfigIds) };
    inline ListUserCustomLogConfigResponseBodyConfigIds configIds() { DARABONBA_PTR_GET(configIds_, ListUserCustomLogConfigResponseBodyConfigIds) };
    inline ListUserCustomLogConfigResponseBody& setConfigIds(const ListUserCustomLogConfigResponseBodyConfigIds & configIds) { DARABONBA_PTR_SET_VALUE(configIds_, configIds) };
    inline ListUserCustomLogConfigResponseBody& setConfigIds(ListUserCustomLogConfigResponseBodyConfigIds && configIds) { DARABONBA_PTR_SET_RVALUE(configIds_, configIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserCustomLogConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of log configuration IDs.
    std::shared_ptr<ListUserCustomLogConfigResponseBodyConfigIds> configIds_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
