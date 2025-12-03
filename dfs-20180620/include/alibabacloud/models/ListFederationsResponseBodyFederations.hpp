// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEDERATIONSRESPONSEBODYFEDERATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTFEDERATIONSRESPONSEBODYFEDERATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListFederationsResponseBodyFederations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFederationsResponseBodyFederations& obj) { 
      DARABONBA_PTR_TO_JSON(FederationId, federationId_);
      DARABONBA_PTR_TO_JSON(FileSystemIds, fileSystemIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListFederationsResponseBodyFederations& obj) { 
      DARABONBA_PTR_FROM_JSON(FederationId, federationId_);
      DARABONBA_PTR_FROM_JSON(FileSystemIds, fileSystemIds_);
    };
    ListFederationsResponseBodyFederations() = default ;
    ListFederationsResponseBodyFederations(const ListFederationsResponseBodyFederations &) = default ;
    ListFederationsResponseBodyFederations(ListFederationsResponseBodyFederations &&) = default ;
    ListFederationsResponseBodyFederations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFederationsResponseBodyFederations() = default ;
    ListFederationsResponseBodyFederations& operator=(const ListFederationsResponseBodyFederations &) = default ;
    ListFederationsResponseBodyFederations& operator=(ListFederationsResponseBodyFederations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->federationId_ == nullptr
        && return this->fileSystemIds_ == nullptr; };
    // federationId Field Functions 
    bool hasFederationId() const { return this->federationId_ != nullptr;};
    void deleteFederationId() { this->federationId_ = nullptr;};
    inline string federationId() const { DARABONBA_PTR_GET_DEFAULT(federationId_, "") };
    inline ListFederationsResponseBodyFederations& setFederationId(string federationId) { DARABONBA_PTR_SET_VALUE(federationId_, federationId) };


    // fileSystemIds Field Functions 
    bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
    void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
    inline string fileSystemIds() const { DARABONBA_PTR_GET_DEFAULT(fileSystemIds_, "") };
    inline ListFederationsResponseBodyFederations& setFileSystemIds(string fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };


  protected:
    std::shared_ptr<string> federationId_ = nullptr;
    std::shared_ptr<string> fileSystemIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
