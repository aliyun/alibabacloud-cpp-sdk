// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASESORTSCRIPTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_RELEASESORTSCRIPTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ReleaseSortScriptResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseSortScriptResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseSortScriptResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ReleaseSortScriptResponseBodyResult() = default ;
    ReleaseSortScriptResponseBodyResult(const ReleaseSortScriptResponseBodyResult &) = default ;
    ReleaseSortScriptResponseBodyResult(ReleaseSortScriptResponseBodyResult &&) = default ;
    ReleaseSortScriptResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseSortScriptResponseBodyResult() = default ;
    ReleaseSortScriptResponseBodyResult& operator=(const ReleaseSortScriptResponseBodyResult &) = default ;
    ReleaseSortScriptResponseBodyResult& operator=(ReleaseSortScriptResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline ReleaseSortScriptResponseBodyResult& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
