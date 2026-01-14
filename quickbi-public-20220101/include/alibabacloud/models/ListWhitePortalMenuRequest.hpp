// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWHITEPORTALMENUREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWHITEPORTALMENUREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListWhitePortalMenuRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWhitePortalMenuRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataportalId, dataportalId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWhitePortalMenuRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataportalId, dataportalId_);
    };
    ListWhitePortalMenuRequest() = default ;
    ListWhitePortalMenuRequest(const ListWhitePortalMenuRequest &) = default ;
    ListWhitePortalMenuRequest(ListWhitePortalMenuRequest &&) = default ;
    ListWhitePortalMenuRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWhitePortalMenuRequest() = default ;
    ListWhitePortalMenuRequest& operator=(const ListWhitePortalMenuRequest &) = default ;
    ListWhitePortalMenuRequest& operator=(ListWhitePortalMenuRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataportalId_ == nullptr; };
    // dataportalId Field Functions 
    bool hasDataportalId() const { return this->dataportalId_ != nullptr;};
    void deleteDataportalId() { this->dataportalId_ = nullptr;};
    inline string getDataportalId() const { DARABONBA_PTR_GET_DEFAULT(dataportalId_, "") };
    inline ListWhitePortalMenuRequest& setDataportalId(string dataportalId) { DARABONBA_PTR_SET_VALUE(dataportalId_, dataportalId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataportalId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
