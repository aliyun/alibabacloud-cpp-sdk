// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESDGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    DeleteSDGRequest() = default ;
    DeleteSDGRequest(const DeleteSDGRequest &) = default ;
    DeleteSDGRequest(DeleteSDGRequest &&) = default ;
    DeleteSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSDGRequest() = default ;
    DeleteSDGRequest& operator=(const DeleteSDGRequest &) = default ;
    DeleteSDGRequest& operator=(DeleteSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SDGId_ == nullptr; };
    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline const vector<string> & getSDGId() const { DARABONBA_PTR_GET_CONST(SDGId_, vector<string>) };
    inline vector<string> getSDGId() { DARABONBA_PTR_GET(SDGId_, vector<string>) };
    inline DeleteSDGRequest& setSDGId(const vector<string> & SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };
    inline DeleteSDGRequest& setSDGId(vector<string> && SDGId) { DARABONBA_PTR_SET_RVALUE(SDGId_, SDGId) };


  protected:
    // The IDs of the SDGs that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> SDGId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
