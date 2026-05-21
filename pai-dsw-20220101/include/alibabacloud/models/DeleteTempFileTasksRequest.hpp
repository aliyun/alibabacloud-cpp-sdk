// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETEMPFILETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETEMPFILETASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class DeleteTempFileTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTempFileTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TempFileTaskIds, tempFileTaskIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTempFileTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TempFileTaskIds, tempFileTaskIds_);
    };
    DeleteTempFileTasksRequest() = default ;
    DeleteTempFileTasksRequest(const DeleteTempFileTasksRequest &) = default ;
    DeleteTempFileTasksRequest(DeleteTempFileTasksRequest &&) = default ;
    DeleteTempFileTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTempFileTasksRequest() = default ;
    DeleteTempFileTasksRequest& operator=(const DeleteTempFileTasksRequest &) = default ;
    DeleteTempFileTasksRequest& operator=(DeleteTempFileTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tempFileTaskIds_ == nullptr; };
    // tempFileTaskIds Field Functions 
    bool hasTempFileTaskIds() const { return this->tempFileTaskIds_ != nullptr;};
    void deleteTempFileTaskIds() { this->tempFileTaskIds_ = nullptr;};
    inline const vector<string> & getTempFileTaskIds() const { DARABONBA_PTR_GET_CONST(tempFileTaskIds_, vector<string>) };
    inline vector<string> getTempFileTaskIds() { DARABONBA_PTR_GET(tempFileTaskIds_, vector<string>) };
    inline DeleteTempFileTasksRequest& setTempFileTaskIds(const vector<string> & tempFileTaskIds) { DARABONBA_PTR_SET_VALUE(tempFileTaskIds_, tempFileTaskIds) };
    inline DeleteTempFileTasksRequest& setTempFileTaskIds(vector<string> && tempFileTaskIds) { DARABONBA_PTR_SET_RVALUE(tempFileTaskIds_, tempFileTaskIds) };


  protected:
    shared_ptr<vector<string>> tempFileTaskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
