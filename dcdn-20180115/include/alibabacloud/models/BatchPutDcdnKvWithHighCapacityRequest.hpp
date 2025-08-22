// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHPUTDCDNKVWITHHIGHCAPACITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHPUTDCDNKVWITHHIGHCAPACITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchPutDcdnKvWithHighCapacityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchPutDcdnKvWithHighCapacityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, BatchPutDcdnKvWithHighCapacityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    BatchPutDcdnKvWithHighCapacityRequest() = default ;
    BatchPutDcdnKvWithHighCapacityRequest(const BatchPutDcdnKvWithHighCapacityRequest &) = default ;
    BatchPutDcdnKvWithHighCapacityRequest(BatchPutDcdnKvWithHighCapacityRequest &&) = default ;
    BatchPutDcdnKvWithHighCapacityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchPutDcdnKvWithHighCapacityRequest() = default ;
    BatchPutDcdnKvWithHighCapacityRequest& operator=(const BatchPutDcdnKvWithHighCapacityRequest &) = default ;
    BatchPutDcdnKvWithHighCapacityRequest& operator=(BatchPutDcdnKvWithHighCapacityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespace_ != nullptr
        && this->url_ != nullptr; };
    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchPutDcdnKvWithHighCapacityRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline BatchPutDcdnKvWithHighCapacityRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
