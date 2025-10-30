// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTENTERPRISEACCELERATETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTENTERPRISEACCELERATETARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ImportEnterpriseAccelerateTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportEnterpriseAccelerateTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportEnterpriseAccelerateTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ImportEnterpriseAccelerateTargetsResponseBody() = default ;
    ImportEnterpriseAccelerateTargetsResponseBody(const ImportEnterpriseAccelerateTargetsResponseBody &) = default ;
    ImportEnterpriseAccelerateTargetsResponseBody(ImportEnterpriseAccelerateTargetsResponseBody &&) = default ;
    ImportEnterpriseAccelerateTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportEnterpriseAccelerateTargetsResponseBody() = default ;
    ImportEnterpriseAccelerateTargetsResponseBody& operator=(const ImportEnterpriseAccelerateTargetsResponseBody &) = default ;
    ImportEnterpriseAccelerateTargetsResponseBody& operator=(ImportEnterpriseAccelerateTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ImportEnterpriseAccelerateTargetsResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportEnterpriseAccelerateTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
