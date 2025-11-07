// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GmtEnd, gmtEnd_);
      DARABONBA_PTR_TO_JSON(GmtStart, gmtStart_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtEnd, gmtEnd_);
      DARABONBA_PTR_FROM_JSON(GmtStart, gmtStart_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    DescribeListFaceVerifyDataRequest() = default ;
    DescribeListFaceVerifyDataRequest(const DescribeListFaceVerifyDataRequest &) = default ;
    DescribeListFaceVerifyDataRequest(DescribeListFaceVerifyDataRequest &&) = default ;
    DescribeListFaceVerifyDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyDataRequest() = default ;
    DescribeListFaceVerifyDataRequest& operator=(const DescribeListFaceVerifyDataRequest &) = default ;
    DescribeListFaceVerifyDataRequest& operator=(DescribeListFaceVerifyDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtEnd_ == nullptr
        && return this->gmtStart_ == nullptr && return this->name_ == nullptr && return this->sceneId_ == nullptr; };
    // gmtEnd Field Functions 
    bool hasGmtEnd() const { return this->gmtEnd_ != nullptr;};
    void deleteGmtEnd() { this->gmtEnd_ = nullptr;};
    inline int64_t gmtEnd() const { DARABONBA_PTR_GET_DEFAULT(gmtEnd_, 0L) };
    inline DescribeListFaceVerifyDataRequest& setGmtEnd(int64_t gmtEnd) { DARABONBA_PTR_SET_VALUE(gmtEnd_, gmtEnd) };


    // gmtStart Field Functions 
    bool hasGmtStart() const { return this->gmtStart_ != nullptr;};
    void deleteGmtStart() { this->gmtStart_ = nullptr;};
    inline int64_t gmtStart() const { DARABONBA_PTR_GET_DEFAULT(gmtStart_, 0L) };
    inline DescribeListFaceVerifyDataRequest& setGmtStart(int64_t gmtStart) { DARABONBA_PTR_SET_VALUE(gmtStart_, gmtStart) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeListFaceVerifyDataRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline DescribeListFaceVerifyDataRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // End time of the query.
    std::shared_ptr<int64_t> gmtEnd_ = nullptr;
    // Start time of the query.
    std::shared_ptr<int64_t> gmtStart_ = nullptr;
    // Product Code, currently deprecated.
    std::shared_ptr<string> name_ = nullptr;
    // Scene ID.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
