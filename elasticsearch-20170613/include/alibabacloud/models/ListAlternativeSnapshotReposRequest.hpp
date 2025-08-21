// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALTERNATIVESNAPSHOTREPOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALTERNATIVESNAPSHOTREPOSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAlternativeSnapshotReposRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlternativeSnapshotReposRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alreadySetItems, alreadySetItems_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlternativeSnapshotReposRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alreadySetItems, alreadySetItems_);
    };
    ListAlternativeSnapshotReposRequest() = default ;
    ListAlternativeSnapshotReposRequest(const ListAlternativeSnapshotReposRequest &) = default ;
    ListAlternativeSnapshotReposRequest(ListAlternativeSnapshotReposRequest &&) = default ;
    ListAlternativeSnapshotReposRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlternativeSnapshotReposRequest() = default ;
    ListAlternativeSnapshotReposRequest& operator=(const ListAlternativeSnapshotReposRequest &) = default ;
    ListAlternativeSnapshotReposRequest& operator=(ListAlternativeSnapshotReposRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alreadySetItems_ != nullptr; };
    // alreadySetItems Field Functions 
    bool hasAlreadySetItems() const { return this->alreadySetItems_ != nullptr;};
    void deleteAlreadySetItems() { this->alreadySetItems_ = nullptr;};
    inline bool alreadySetItems() const { DARABONBA_PTR_GET_DEFAULT(alreadySetItems_, false) };
    inline ListAlternativeSnapshotReposRequest& setAlreadySetItems(bool alreadySetItems) { DARABONBA_PTR_SET_VALUE(alreadySetItems_, alreadySetItems) };


  protected:
    // Indicates whether to return the OSS reference repository added. The return value. Valid values: true and false.
    std::shared_ptr<bool> alreadySetItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
