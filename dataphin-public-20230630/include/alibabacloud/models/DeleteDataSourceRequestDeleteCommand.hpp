// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASOURCEREQUESTDELETECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASOURCEREQUESTDELETECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteDataSourceRequestDeleteCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataSourceRequestDeleteCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ProdDataSourceId, prodDataSourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataSourceRequestDeleteCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ProdDataSourceId, prodDataSourceId_);
    };
    DeleteDataSourceRequestDeleteCommand() = default ;
    DeleteDataSourceRequestDeleteCommand(const DeleteDataSourceRequestDeleteCommand &) = default ;
    DeleteDataSourceRequestDeleteCommand(DeleteDataSourceRequestDeleteCommand &&) = default ;
    DeleteDataSourceRequestDeleteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataSourceRequestDeleteCommand() = default ;
    DeleteDataSourceRequestDeleteCommand& operator=(const DeleteDataSourceRequestDeleteCommand &) = default ;
    DeleteDataSourceRequestDeleteCommand& operator=(DeleteDataSourceRequestDeleteCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mode_ == nullptr
        && return this->prodDataSourceId_ == nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DeleteDataSourceRequestDeleteCommand& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // prodDataSourceId Field Functions 
    bool hasProdDataSourceId() const { return this->prodDataSourceId_ != nullptr;};
    void deleteProdDataSourceId() { this->prodDataSourceId_ = nullptr;};
    inline int64_t prodDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(prodDataSourceId_, 0L) };
    inline DeleteDataSourceRequestDeleteCommand& setProdDataSourceId(int64_t prodDataSourceId) { DARABONBA_PTR_SET_VALUE(prodDataSourceId_, prodDataSourceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> mode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> prodDataSourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
