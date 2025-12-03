// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONNECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListServiceConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sericeConnectionType, sericeConnectionType_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sericeConnectionType, sericeConnectionType_);
    };
    ListServiceConnectionsRequest() = default ;
    ListServiceConnectionsRequest(const ListServiceConnectionsRequest &) = default ;
    ListServiceConnectionsRequest(ListServiceConnectionsRequest &&) = default ;
    ListServiceConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConnectionsRequest() = default ;
    ListServiceConnectionsRequest& operator=(const ListServiceConnectionsRequest &) = default ;
    ListServiceConnectionsRequest& operator=(ListServiceConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sericeConnectionType_ == nullptr; };
    // sericeConnectionType Field Functions 
    bool hasSericeConnectionType() const { return this->sericeConnectionType_ != nullptr;};
    void deleteSericeConnectionType() { this->sericeConnectionType_ = nullptr;};
    inline string sericeConnectionType() const { DARABONBA_PTR_GET_DEFAULT(sericeConnectionType_, "") };
    inline ListServiceConnectionsRequest& setSericeConnectionType(string sericeConnectionType) { DARABONBA_PTR_SET_VALUE(sericeConnectionType_, sericeConnectionType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sericeConnectionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
