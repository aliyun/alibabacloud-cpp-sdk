// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNODECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNODECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetNodeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNodeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetNodeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetNodeConfigRequest() = default ;
    GetNodeConfigRequest(const GetNodeConfigRequest &) = default ;
    GetNodeConfigRequest(GetNodeConfigRequest &&) = default ;
    GetNodeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNodeConfigRequest() = default ;
    GetNodeConfigRequest& operator=(const GetNodeConfigRequest &) = default ;
    GetNodeConfigRequest& operator=(GetNodeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterName_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GetNodeConfigRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetNodeConfigRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetNodeConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the cluster
    std::shared_ptr<string> clusterName_ = nullptr;
    // The node name.
    std::shared_ptr<string> name_ = nullptr;
    // The node type. Valid values:
    // 
    // *   qrs: Query Result Searcher (QRS) worker
    // *   search: Search worker
    // *   index: index
    // *   cluster: cluster
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
