// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLAYERVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLAYERVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListLayerVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLayerVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(startVersion, startVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListLayerVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(startVersion, startVersion_);
    };
    ListLayerVersionsRequest() = default ;
    ListLayerVersionsRequest(const ListLayerVersionsRequest &) = default ;
    ListLayerVersionsRequest(ListLayerVersionsRequest &&) = default ;
    ListLayerVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLayerVersionsRequest() = default ;
    ListLayerVersionsRequest& operator=(const ListLayerVersionsRequest &) = default ;
    ListLayerVersionsRequest& operator=(ListLayerVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->limit_ != nullptr
        && this->startVersion_ != nullptr; };
    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListLayerVersionsRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // startVersion Field Functions 
    bool hasStartVersion() const { return this->startVersion_ != nullptr;};
    void deleteStartVersion() { this->startVersion_ = nullptr;};
    inline string startVersion() const { DARABONBA_PTR_GET_DEFAULT(startVersion_, "") };
    inline ListLayerVersionsRequest& setStartVersion(string startVersion) { DARABONBA_PTR_SET_VALUE(startVersion_, startVersion) };


  protected:
    // The number of versions to be returned.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The initial version of the layer.
    std::shared_ptr<string> startVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
