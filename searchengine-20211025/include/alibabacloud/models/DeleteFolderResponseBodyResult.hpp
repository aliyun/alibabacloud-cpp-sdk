// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFOLDERRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEFOLDERRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class DeleteFolderResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFolderResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFolderResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DeleteFolderResponseBodyResult() = default ;
    DeleteFolderResponseBodyResult(const DeleteFolderResponseBodyResult &) = default ;
    DeleteFolderResponseBodyResult(DeleteFolderResponseBodyResult &&) = default ;
    DeleteFolderResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFolderResponseBodyResult() = default ;
    DeleteFolderResponseBodyResult& operator=(const DeleteFolderResponseBodyResult &) = default ;
    DeleteFolderResponseBodyResult& operator=(DeleteFolderResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteFolderResponseBodyResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const map<string, string> & result() const { DARABONBA_PTR_GET_CONST(result_, map<string, string>) };
    inline map<string, string> result() { DARABONBA_PTR_GET(result_, map<string, string>) };
    inline DeleteFolderResponseBodyResult& setResult(const map<string, string> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DeleteFolderResponseBodyResult& setResult(map<string, string> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result
    std::shared_ptr<map<string, string>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
