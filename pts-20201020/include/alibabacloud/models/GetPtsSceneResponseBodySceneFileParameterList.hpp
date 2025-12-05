// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENEFILEPARAMETERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENERESPONSEBODYSCENEFILEPARAMETERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneResponseBodySceneFileParameterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneResponseBodySceneFileParameterList& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileOssAddress, fileOssAddress_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneResponseBodySceneFileParameterList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileOssAddress, fileOssAddress_);
    };
    GetPtsSceneResponseBodySceneFileParameterList() = default ;
    GetPtsSceneResponseBodySceneFileParameterList(const GetPtsSceneResponseBodySceneFileParameterList &) = default ;
    GetPtsSceneResponseBodySceneFileParameterList(GetPtsSceneResponseBodySceneFileParameterList &&) = default ;
    GetPtsSceneResponseBodySceneFileParameterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneResponseBodySceneFileParameterList() = default ;
    GetPtsSceneResponseBodySceneFileParameterList& operator=(const GetPtsSceneResponseBodySceneFileParameterList &) = default ;
    GetPtsSceneResponseBodySceneFileParameterList& operator=(GetPtsSceneResponseBodySceneFileParameterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileName_ == nullptr
        && return this->fileOssAddress_ == nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetPtsSceneResponseBodySceneFileParameterList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileOssAddress Field Functions 
    bool hasFileOssAddress() const { return this->fileOssAddress_ != nullptr;};
    void deleteFileOssAddress() { this->fileOssAddress_ = nullptr;};
    inline string fileOssAddress() const { DARABONBA_PTR_GET_DEFAULT(fileOssAddress_, "") };
    inline GetPtsSceneResponseBodySceneFileParameterList& setFileOssAddress(string fileOssAddress) { DARABONBA_PTR_SET_VALUE(fileOssAddress_, fileOssAddress) };


  protected:
    // The file name.
    std::shared_ptr<string> fileName_ = nullptr;
    // The OSS address of the file. Make sure that the address is accessible from the Internet.
    std::shared_ptr<string> fileOssAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
