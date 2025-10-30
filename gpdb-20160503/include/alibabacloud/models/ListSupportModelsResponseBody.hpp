// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSupportModelsResponseBodyModelNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSupportModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ModelNames, modelNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ModelNames, modelNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSupportModelsResponseBody() = default ;
    ListSupportModelsResponseBody(const ListSupportModelsResponseBody &) = default ;
    ListSupportModelsResponseBody(ListSupportModelsResponseBody &&) = default ;
    ListSupportModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportModelsResponseBody() = default ;
    ListSupportModelsResponseBody& operator=(const ListSupportModelsResponseBody &) = default ;
    ListSupportModelsResponseBody& operator=(ListSupportModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelNames_ == nullptr
        && return this->requestId_ == nullptr; };
    // modelNames Field Functions 
    bool hasModelNames() const { return this->modelNames_ != nullptr;};
    void deleteModelNames() { this->modelNames_ = nullptr;};
    inline const ListSupportModelsResponseBodyModelNames & modelNames() const { DARABONBA_PTR_GET_CONST(modelNames_, ListSupportModelsResponseBodyModelNames) };
    inline ListSupportModelsResponseBodyModelNames modelNames() { DARABONBA_PTR_GET(modelNames_, ListSupportModelsResponseBodyModelNames) };
    inline ListSupportModelsResponseBody& setModelNames(const ListSupportModelsResponseBodyModelNames & modelNames) { DARABONBA_PTR_SET_VALUE(modelNames_, modelNames) };
    inline ListSupportModelsResponseBody& setModelNames(ListSupportModelsResponseBodyModelNames && modelNames) { DARABONBA_PTR_SET_RVALUE(modelNames_, modelNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupportModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ListSupportModelsResponseBodyModelNames> modelNames_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
