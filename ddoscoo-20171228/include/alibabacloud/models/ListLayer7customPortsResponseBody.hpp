// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYER7CUSTOMPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYER7CUSTOMPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLayer7CustomPortsResponseBodyLayer7CustomPorts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListLayer7CustomPortsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayer7CustomPortsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Layer7CustomPorts, layer7CustomPorts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayer7CustomPortsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Layer7CustomPorts, layer7CustomPorts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLayer7CustomPortsResponseBody() = default ;
    ListLayer7CustomPortsResponseBody(const ListLayer7CustomPortsResponseBody &) = default ;
    ListLayer7CustomPortsResponseBody(ListLayer7CustomPortsResponseBody &&) = default ;
    ListLayer7CustomPortsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayer7CustomPortsResponseBody() = default ;
    ListLayer7CustomPortsResponseBody& operator=(const ListLayer7CustomPortsResponseBody &) = default ;
    ListLayer7CustomPortsResponseBody& operator=(ListLayer7CustomPortsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->layer7CustomPorts_ != nullptr
        && this->requestId_ != nullptr; };
    // layer7CustomPorts Field Functions 
    bool hasLayer7CustomPorts() const { return this->layer7CustomPorts_ != nullptr;};
    void deleteLayer7CustomPorts() { this->layer7CustomPorts_ = nullptr;};
    inline const vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts> & layer7CustomPorts() const { DARABONBA_PTR_GET_CONST(layer7CustomPorts_, vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts>) };
    inline vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts> layer7CustomPorts() { DARABONBA_PTR_GET(layer7CustomPorts_, vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts>) };
    inline ListLayer7CustomPortsResponseBody& setLayer7CustomPorts(const vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts> & layer7CustomPorts) { DARABONBA_PTR_SET_VALUE(layer7CustomPorts_, layer7CustomPorts) };
    inline ListLayer7CustomPortsResponseBody& setLayer7CustomPorts(vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts> && layer7CustomPorts) { DARABONBA_PTR_SET_RVALUE(layer7CustomPorts_, layer7CustomPorts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLayer7CustomPortsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListLayer7CustomPortsResponseBodyLayer7CustomPorts>> layer7CustomPorts_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
