// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTQPERMISSIONBYCUBEIDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTQPERMISSIONBYCUBEIDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QuerySmartqPermissionByCubeIdResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmartqPermissionByCubeIdResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
      DARABONBA_PTR_TO_JSON(HasPerssion, hasPerssion_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmartqPermissionByCubeIdResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
      DARABONBA_PTR_FROM_JSON(HasPerssion, hasPerssion_);
    };
    QuerySmartqPermissionByCubeIdResponseBodyResult() = default ;
    QuerySmartqPermissionByCubeIdResponseBodyResult(const QuerySmartqPermissionByCubeIdResponseBodyResult &) = default ;
    QuerySmartqPermissionByCubeIdResponseBodyResult(QuerySmartqPermissionByCubeIdResponseBodyResult &&) = default ;
    QuerySmartqPermissionByCubeIdResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmartqPermissionByCubeIdResponseBodyResult() = default ;
    QuerySmartqPermissionByCubeIdResponseBodyResult& operator=(const QuerySmartqPermissionByCubeIdResponseBodyResult &) = default ;
    QuerySmartqPermissionByCubeIdResponseBodyResult& operator=(QuerySmartqPermissionByCubeIdResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cubeId_ != nullptr
        && this->cubeName_ != nullptr && this->hasPerssion_ != nullptr; };
    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline QuerySmartqPermissionByCubeIdResponseBodyResult& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // cubeName Field Functions 
    bool hasCubeName() const { return this->cubeName_ != nullptr;};
    void deleteCubeName() { this->cubeName_ = nullptr;};
    inline string cubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
    inline QuerySmartqPermissionByCubeIdResponseBodyResult& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


    // hasPerssion Field Functions 
    bool hasHasPerssion() const { return this->hasPerssion_ != nullptr;};
    void deleteHasPerssion() { this->hasPerssion_ = nullptr;};
    inline bool hasPerssion() const { DARABONBA_PTR_GET_DEFAULT(hasPerssion_, false) };
    inline QuerySmartqPermissionByCubeIdResponseBodyResult& setHasPerssion(bool hasPerssion) { DARABONBA_PTR_SET_VALUE(hasPerssion_, hasPerssion) };


  protected:
    // Dataset ID.
    std::shared_ptr<string> cubeId_ = nullptr;
    // Dataset name.
    std::shared_ptr<string> cubeName_ = nullptr;
    // Whether the current user has permission for the smart question. Note: \\"HasPerssion\\" seems to be a typo, it should probably be \\"HasPermission\\".
    std::shared_ptr<bool> hasPerssion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
