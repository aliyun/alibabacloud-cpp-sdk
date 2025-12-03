// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETAGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETETAGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeleteTagResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTagResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(tagName, tagName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTagResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(tagName, tagName_);
    };
    DeleteTagResponseBodyResult() = default ;
    DeleteTagResponseBodyResult(const DeleteTagResponseBodyResult &) = default ;
    DeleteTagResponseBodyResult(DeleteTagResponseBodyResult &&) = default ;
    DeleteTagResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTagResponseBodyResult() = default ;
    DeleteTagResponseBodyResult& operator=(const DeleteTagResponseBodyResult &) = default ;
    DeleteTagResponseBodyResult& operator=(DeleteTagResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagName_ == nullptr; };
    // tagName Field Functions 
    bool hasTagName() const { return this->tagName_ != nullptr;};
    void deleteTagName() { this->tagName_ = nullptr;};
    inline string tagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
    inline DeleteTagResponseBodyResult& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


  protected:
    std::shared_ptr<string> tagName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
