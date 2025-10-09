// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityScanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityScanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityScanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDataQualityScanResponseBody() = default ;
    CreateDataQualityScanResponseBody(const CreateDataQualityScanResponseBody &) = default ;
    CreateDataQualityScanResponseBody(CreateDataQualityScanResponseBody &&) = default ;
    CreateDataQualityScanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityScanResponseBody() = default ;
    CreateDataQualityScanResponseBody& operator=(const CreateDataQualityScanResponseBody &) = default ;
    CreateDataQualityScanResponseBody& operator=(CreateDataQualityScanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->requestId_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateDataQualityScanResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataQualityScanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returns the ID of the created data source sharing rule, which uniquely identifies the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
